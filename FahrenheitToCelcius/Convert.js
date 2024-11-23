/*
    Author : Pakshal Jain
    Date : 29/10/2022
    Program : To Convert Entered Temparature From Fahrenheit To Celcius
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Convert Entered Temparature
function Convert(No) {
    var ans = 0.0;
    //Logic To Convert
    ans = (No - 32) * 5 / 9;
    return ans;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 10;
    var fret = 0.0;
    console.log("Jay Ganesh...");
    //Call To Convert Function
    fret = Convert(No);
    console.log("Converted Temperature is :", fret);
}
//Call To Main Function
main();
