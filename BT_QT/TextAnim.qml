import QtQuick 2.15

Item {
    id: root
    /* Khi focusType = false: elide text "...", focusType = true: running text */
    property bool focusType: false
    property string text: "Default text super long long long long long"
    //property real duration
    property real pace
    Rectangle{
        id: outerRectID
        anchors.fill: parent
        color: "#ff355b"
        radius: height/10
        Rectangle{
            id: innerRectID
            anchors{
                verticalCenter: parent.verticalCenter
                horizontalCenter: parent.horizontalCenter
            }
            /* kich thuoc hinh chu nhat phia trong, phan thua ra la do day bien */
            width: parent.width - parent.height*1/4
            height: parent.height*3/4
            //width: parent.width; height: parent.height
            color: "white"
            clip: true
            radius: height/10
            Text{
                id: textID1 // running text

                anchors.verticalCenter: parent.verticalCenter
                width: innerRectID.width

                elide: focusType ? Text.ElideNone : Text.ElideRight
                font{
                    bold: true
                }
                text: root.text
                SequentialAnimation on x{
                    id: seqID
                    running: focusType == true && textID1.width < textID1.contentWidth

                    NumberAnimation {
                        // firstMove: text chay tu bien gioi ben trai chay sang trai, chay cho den
                        // het chieu dai text
                        id: firstMoveID
                        from: 0
                        to: -textID1.contentWidth
                        duration: root.pace*textID1.text.length
                        easing.type: Easing.Linear
                    }
                    NumberAnimation {
                        // secondMove: text chay tu bien gioi ben phai sang trai, thuc hien lien tuc,
                        // chay cho den het chieu dai text
                        id: secondMoveID
                        loops: Animation.Infinite
                        // target: textID1
                        // property: "x"
                        from: innerRectID.width
                        to: -textID1.contentWidth
                        // Chinh duration de toc do cua secondMoveID = toc do firstMoveID
                        duration: firstMoveID.duration*(textID1.contentWidth+innerRectID.width)/textID1.contentWidth
                        easing.type: Easing.Linear
                    }
                }
            }
        }
        MouseArea{
            anchors.fill: parent
            onClicked: {
                root.focusType = !root.focusType
                if(root.focusType == false){
                    textID1.x = 0
                }
                // console.log("text length: ", textID1.contentWidth)
                // console.log("rec width: ", innerRectID.width)
            }
        }
    }


}


