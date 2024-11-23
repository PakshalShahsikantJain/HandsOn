/*
    Author : Pakshal Jain
    Date : 11/04/2022
    Program : To Print Numbers From Entered Number Till 1
*/
function Display(No) {
    var i = 0;
    console.log("Printing Numbers From %d Till 1 ", No);
    for (i = No; i > 0; i--) {
        process.stdout.write(i + " ");
    }
}
function main() {
    var No = 12;
    console.log("Jay Ganesh......");
    Display(No);
}
main();
