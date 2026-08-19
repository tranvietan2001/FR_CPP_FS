import QtQuick 2.15

Item {
    id: root

    /*--------------------------Nhung Properties de set gia tri trong main.qml--------------------------*/
    // 2R >= listview.height
    property real curveListR: listView.height/2
    /*--Width, Height của listview--*/
    property alias lvWidth: listView.width
    property alias lvHeight: listView.height
    /*--Toa do x, y cua listview--*/
    property alias lvX: listView.x
    property alias lvY: listView.y


    /*---------------------------Nhung Properties chi su dung trong file code-------------------------*/
    /* 2R >= listview.height, neu nhap R < listview.height thi gan R = listview.height/2 */
    readonly property real radius: curveListR<listView.height/2 ? listView.height/2 : curveListR
    /*--Toa do tam duong tron ao--*/
    readonly property real centerX: -Math.sqrt(radius*radius-listView.height*listView.height/4)
    readonly property real centerY: listView.height/2


    ListView {
        id: listView
        //width: lvHeight
        //height: 600
        //x: 200; y: 200
        clip: true
        model: 4
        delegate: Rectangle {
            width: listView.width/2
            height: 30
            color: "lightblue"
            border.color: "blue"
            /*--  x = sqrt(r*r - (y-centerY)*(y-centerY)) + centerX  --*/
            x: Math.sqrt(root.radius*root.radius-(index*height - ListView.view.contentY-centerY)*(index*height - ListView.view.contentY-centerY)) + centerX
            Text {
                text: index
                anchors.centerIn: parent
            }
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log(centerX, centerY)
                    console.log("radius", root.radius)
                }
            }
        }
    }
}
