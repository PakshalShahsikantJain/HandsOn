function Pattern(No, No2) {
    var i = 0;
    var j = 0;
    console.log("Printing Below Given Pattern : ");
    for (i = 1; i <= No; i++) {
        for (j = No2; j > 0; j--) {
            if ((i == j) || (i < j)) {
                process.stdout.write("*\t");
            }
            else {
                process.stdout.write("#\t");
            }
        }
        console.log();
    }
}
function main() {
    var No = 4;
    var No2 = 4;
    console.log("Jay Ganesh...");
    Pattern(No, No2);
}
main();
