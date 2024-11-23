/*
    Author : Pakshal Shashikant Jain
    Date : 28/04/2024
    Program : Write a recursive program which display below pattern.
              Output : * * * * *
*/
/////////////////////////////////////////////////////////////////////////////////////////
//Function To Display Pattern
function Display(ino) {
    if (ino == 0) {
        return;
    }
    else {
        process.stdout.write("*" + "\t");
        ino--;
        //Recursive Function Call
        Display(ino);
    }
}
/////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var no = 5;
    console.log("Jay Ganesh....");
    //Call To Display Function
    Display(no);
}
//Call To main function
main();
