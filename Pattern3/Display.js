function Pattern(No) {
    var i = 0;
    for (i = 0; i < No; i++) {
        process.stdout.write("$\t*\t");
    }
}
function main() {
    var No = 5;
    console.log("Jay Ganesh...");
    Pattern(No);
}
main();
