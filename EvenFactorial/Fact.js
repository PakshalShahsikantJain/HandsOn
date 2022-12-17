function EvenFact(No) {
    var i = 0;
    var fact = 1;
    if (No < 0) {
        No = -No;
    }
    for (i = No; i > 0; i--) {
        if (i % 2 == 0) {
            fact = fact * i;
        }
    }
    return fact;
}
function main() {
    var No = -5;
    var iret = 0;
    console.log("Jay ganesh...");
    iret = EvenFact(No);
    console.log("Even Fatorial of Entered Number is :", iret);
}
main();
