function IncomeTax(No) {
    var ans = 0;
    if (No < 500000) {
        return ans;
    }
    else if ((No >= 500000) && (No < 1000000)) {
        ans = (No * 10) / 100;
        return ans;
    }
    else if ((No >= 1000000) && (No < 2000000)) {
        ans = (No * 20) / 100;
        return ans;
    }
    else {
        ans = (No * 30) / 100;
        return ans;
    }
}
function main() {
    var No = 0;
    var fret = 0;
    console.log("Jay Ganes.....");
    console.log("----------Marvellous Income Tax Calculator---------------");
    fret = IncomeTax(No);
    console.log("You Have To Pay Taxable Amount of : %d₹", fret);
}
main();
