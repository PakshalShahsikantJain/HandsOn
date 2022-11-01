/*
    Author : Pakshal Jain
    Date : 25/10/2022
    Program : To Display Table of Entered Number in Reverse order
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Table 
function Display(No : number,No2 : number) {
    var table : number = 0;
    var i : number = 0;

    //Logic
    console.log("Displaying Table in Reverse order..");
    for(i = No2;i > 0;i--) {
        table = No * i;
        console.log(table);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() {
    var No : number = 2;
    var No2 : number = 10;

    console.log("Jay Ganesh....");

    //Call To Display Function
    Display(No,No2);
}

//Main Function
main();