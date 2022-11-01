/*
    Author : Pakshal Jain
    Date : 19/09/2022
    Program : To Check Whether Entered Number is Even or Not
*/
function Check(No) {
    if (No % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}
function main() {
    var no = 12;
    var bret = false;
    console.log("Jay Ganesh.....");
    bret = Check(no);
    if (bret == true) {
        console.log("Entered NUmber is Even");
    }
    else {
        console.log("Entered Number is Odd");
    }
}
main();
