function Display(ino) {
    if (ino < 1) {
        return;
    }
    else {
        process.stdout.write(ino + "\t" + "*\t");
        ino--;
        Display(ino);
    }
}
function main() {
    var ino = 6;
    console.log("Jay Ganesh.....");
    console.log("Output : ");
    Display(ino);
}
main();
