/*
    Author : Pakshal Jain
    Date : 12/12/2022
    Program : To Display Entered Range in Reverse Order
*/
//Function to Dipslay Range in Reverse Order
function RangeRev(No, No2) {
    var i = 0;
    //logic
    for (i = No2; i >= No; i--) {
        console.log(i);
    }
}
//Main Function
function main() {
    var No = -23;
    var No2 = 35;
    console.log("Jay ganesh...");
    //Handeling Condition if Entered Number is Negative or Starting Number is Greater Than Ending number
    if ((No < 0) || (No > No2)) {
        console.log("Invalid Range");
        return;
    }
    //Call To RangeRev Function
    RangeRev(No, No2);
}
//Call Main Function
main();
