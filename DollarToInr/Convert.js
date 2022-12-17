function Convert(No) {
    var ans = 0;
    if (No < 0) {
        No = -No;
    }
    ans = No * 70;
    return ans;
}
function main() {
    var No = -5;
    var iret = 0;
    console.log("Jay ganesh....");
    iret = Convert(No);
    console.log("Monvey After Conversion From Dollar to Inr is :", iret);
}
main();
