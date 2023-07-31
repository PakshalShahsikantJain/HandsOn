function AsciiTable() {
    var i = 0;
    for (i = 0; i <= 255; i++) {
        console.log("%d \t\t %x \t\t %o \t\t %c \n", i, i, i, i);
        console.log();
    }
}
function main() {
    console.log("Jay Ganesh....");
    AsciiTable();
}
main();
