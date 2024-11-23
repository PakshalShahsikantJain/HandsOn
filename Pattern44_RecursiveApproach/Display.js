function Display(ino) {
    if (ino < 1) {
        return;
    }
    else {
        process.stdout.write(ino + "\t");
        ino--;
        Display(ino);
    }
}
function main() {
    console.log("Jay Ganesh....");
    console.log("Output : ");
    Display(5);
}
main();
