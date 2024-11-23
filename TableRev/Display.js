function Display(No, No2) {
    var table = 0;
    var i = 0;
    console.log("Displaying Table in Reverse order..");
    for (i = No2; i > 0; i--) {
        table = No * i;
        console.log(table);
    }
}
function main() {
    var No = 2;
    var No2 = 10;
    console.log("Jay Ganesh....");
    Display(No, No2);
}
main();
