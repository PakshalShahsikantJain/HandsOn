function Check(ch) {
    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')) {
        return true;
    }
    else if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')) {
        return true;
    }
    else {
        return false;
    }
}
function main() {
    var ch = 'o';
    var bret = false;
    console.log("Ganapati Bappa Morya");
    bret = Check(ch);
    if (bret == true) {
        console.log("Entered Character " + ch + " is Vowel");
    }
    else {
        console.log("Entered Character " + ch + " is Not Vowel");
    }
}
main();
