import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    id: root
    width: 800
    height: 800
    visible: true
    title: qsTr("Hello World")

    TextAnim{
        /*----CLICK CHUOT VAO TEXT DE CHUYEN TRANG THAI GIUA ELIDE "..." VA RUNNING TEXT----*/
        anchors.horizontalCenter: parent.horizontalCenter
        width: 200
        height: 40
        text: "Somebody that i have used to know"
        /* pace: so giay chay mot ky tu */
        pace: 50
    }

    /* 2R >= listview.height, neu nhap R < listview.height thi gan R = listview.height/2 */
    CurveListView{
        id: curveLvID
        //curveListR: 200*Math.sqrt(2)
        curveListR: 250
        /*--Set Height, Width cho listview--*/
        lvHeight: 400
        lvWidth: 400
        /*--Set toa do x, y cho listview--*/
        lvX: 200
        lvY: 200
    }
}
