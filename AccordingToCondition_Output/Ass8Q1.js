/*
    Author : Pakshal Jain
    Date : 21/10/2022
    Program : To accept number from user and if number is less than 50 then print small,
              if it is greater than 50 and less than 100 then print medium,
              if it is greater than 100 then print large
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Print Output
function Output(No) {
    //Logic
    if (No < 50) {
        console.log("Small");
    }
    else if ((No >= 50) && (No <= 100)) {
        console.log("Medium");
    }
    else if (No > 100) {
        console.log("Large");
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 75;
    console.log("Jay Ganesh...");
    //Call To Output Function
    Output(No);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
