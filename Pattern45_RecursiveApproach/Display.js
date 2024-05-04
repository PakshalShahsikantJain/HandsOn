/*
    Author: Pakshal Shashikant Jain
    Date: 04/05/2024
    Program: Write a recursive program which display below pattern.
             Output : A B C D E F
                      a b c d e f
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Display Given Pattern
function Display(ino, ch) {
    var ascii = 0;
    if (ino < 1) {
        return;
    }
    else {
        process.stdout.write(ch + "\t");
        ascii = ch.charCodeAt() + 1;
        ch = String.fromCharCode(ascii);
        ino--;
        //Recursive Function Call To Display Function
        Display(ino, ch);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var ino = 6;
    var ch = 'a';
    console.log("Jay Ganesh....");
    //Call To Display Function
    Display(ino, ch);
}
//Call To Main Function
main();
