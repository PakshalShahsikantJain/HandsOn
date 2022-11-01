/*
    Auhtor : Pakshal Jain
    Date : 20/10/2022
    Program : To Calculate Difference Between Summation of Even and odd Digits of Entered Number
*/
function Difference(No) {
    var Diff = 0;
    var Sum = 0;
    var Sum2 = 0;
    var Digits = 0;
    while (No != 0) {
        Digits = No % 10;
        if (Digits % 2 == 0) {
            Sum = Sum + Digits;
        }
        else if (Digits % 2 != 0) {
            Sum2 = Sum2 + Digits;
        }
        No = Math.floor(No / 10);
    }
    Diff = Sum - Sum2;
    return Diff;
}
function main() {
    var no = 2395;
    var iret = 0;
    console.log("Jay Ganesh...");
    iret = Difference(no);
    console.log("Difference Between Summation of Even and Odd Digits is : %d", iret);
}
main();
