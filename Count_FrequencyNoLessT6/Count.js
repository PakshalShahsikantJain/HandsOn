function Frequency(No) {
    var Digit = 0;
    var icnt = 0;
    while (No != 0) {
        Digit = No % 10;
        if (Digit < 6) {
            icnt++;
        }
        No = Math.floor(No / 10);
    }
    return icnt;
}
function main() {
    var No = 6547;
    var iret = 0;
    console.log("Jay Ganesh...");
    iret = Frequency(No);
    console.log("Frequecy of Digits Less Than 6 is : %d", iret);
}
main();
