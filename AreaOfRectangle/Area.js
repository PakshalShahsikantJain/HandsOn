/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Height and Radius from user and Calculate Area of Recatangle
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Calculate Area of Rectangle
function Calculate(Height, Width) {
    var area = 0;
    //Logic
    area = Height * Width;
    return area;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var Height = 5.3;
    var Width = 9.78;
    var fret = 0.0;
    console.log("Jay ganesh...");
    //Call To Calculate Function
    fret = Calculate(Height, Width);
    console.log("Area of Rectangle is : %f", fret);
}
//Call TO Main Function
main();
