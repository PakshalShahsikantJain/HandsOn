/*
    Auhtor : Pakshal Jain
    Date : 19/10/2022
    Program : To Count Frequecy of Digits Betweeb 3 and 7 in Entered Number
*/
//Function To Count Frequency
function Frequency(No) {
    var Digit = 0;
    var icnt = 0;
    //Logic 
    while (No != 0) {
        Digit = No % 10;
        if ((Digit > 3) && (Digit < 7)) {
            icnt++;
        }
        No = Math.floor(No / 10);
    }
    return icnt;
}
//Main Function
function main() {
    var No = 786746;
    var iret = 0;
    console.log("Jay Ganesh...");
    //Call To Frequency Function
    iret = Frequency(No);
    console.log("Frequency of Digits Between 3 and 7 in Entered Number is : ", iret);
}
//Call To Main Function
main();
