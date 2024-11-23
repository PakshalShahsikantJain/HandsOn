function Summation(no) {
    var i = 0;
    var sum = 0;
    for (i = 1; i < no; i++) {
        if (no % i != 0) {
            sum = sum + i;
        }
    }
    return sum;
}
function main() {
    var no = 12;
    var iret = 0;
    console.log("Jay Ganesh....");
    iret = Summation(no);
    console.log("Summation of Non Factors of Entered Number is : %d", iret);
}
main();
