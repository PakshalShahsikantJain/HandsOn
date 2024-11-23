/*
    Author : Pakshal Jain
    Date : 22/11/2022
    Program : To Calcuate Summation of Numbers in Entered Range
*/
//Function To calculate Summation
function Summation(No, No2) {
    var i = 0;
    var sum = 0;
    for (i = No; i <= No2; i++) {
        sum = sum + i;
    }
    return sum;
}
//Main Function
function main() {
    var No = -10;
    var No2 = 30;
    var iret = 0;
    console.log("Jay Ganesh...");
    //Handleing Condition if Entered Number is Negative
    if ((No < 0) || (No2 < 0)) {
        console.log("Invalid Range");
        return;
    }
    //Handeling Condition if Entered Starting Number is Greater Than Ending Number
    else if (No > No2) {
        console.log("Ivalid Range");
        return;
    }
    //Call To Calculate Function
    iret = Summation(No, No2);
    console.log("Summation of Number in Entered Range is :", iret);
}
//Call To Main Function
main();
