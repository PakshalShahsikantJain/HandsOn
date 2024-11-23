/*
    Author : Pakshal Jain
    Date : 24/09/2022
    Program : To Convert Case of Entered Character.
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert Case
function Convert(ch : any)
{
    var c : any;

    //Logic of Convereting Case
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        c = ch.charCodeAt() + 32;
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        c = ch.charCodeAt() - 32;
    }

    return String.fromCharCode(c);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    var ch : string = 'G';
    var cret : any;

    console.log("Jay Ganesh....");

    cret = Convert(ch);

    console.log("Character Convereted is :\n"+cret);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

main();