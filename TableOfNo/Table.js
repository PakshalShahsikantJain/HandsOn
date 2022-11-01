function Table(No, No2) {
    var i = 0;
    var table = 0;
    console.log("Printing Table of Entered Number");
    for (i = 1; i <= No2; i++) {
        table = No * i;
        console.log("%d", table);
    }
}
function main() {
    var No = 2;
    var No2 = 10;
    console.log("Jay Ganesh....");
    Table(No, No2);
}
main();
