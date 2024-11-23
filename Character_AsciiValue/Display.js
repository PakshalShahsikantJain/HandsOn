var AsciiValue = /** @class */ (function () {
    function AsciiValue() {
        this.ch = ' ';
    }
    AsciiValue.prototype.Accept = function () {
        this.ch = '^';
    };
    AsciiValue.prototype.Display = function () {
        console.log("Decimal Value : %d", this.ch.charCodeAt());
        console.log("Hexadecimal Value : 0X" + this.ch.charCodeAt().toString(16));
        console.log("Octal Value : 0o" + this.ch.charCodeAt().toString(8));
    };
    return AsciiValue;
}());
function main() {
    console.log("Jay Ganesh.....");
    var aobj = new AsciiValue();
    aobj.Accept();
    aobj.Display();
}
main();
