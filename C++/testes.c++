#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

// Classes
/*
class testando{
    public:
    string tst;

    testando(string tst0){
        tst = tst0;
    }
};
int main(){
    int e = 0;
    string em = "empregado", nome = "Julius";
            
    e++;
    em += to_string(e);

    //cout << emP << "  " << em << "  " << *emP << "  ";

    testando *emP = new testando(nome);

    

    while (true)
    {}
    
}*/

//ponteiros
/*
int* decrescente(int l, int *array0[], int quant){
    switch (l)
    {
    case 0:
        break;
    
    default:
        if (*array0[l] > *array0[l-1])
        {
            int* k = array0[l];
            array0[l] = array0[l-1];
            array0[l-1] = k;
            decrescente(l - 1, array0, quant);
        }
        break;
    }
    

    return array0[quant];
}
int main(){
    int x = 3, y = 1, z = 2;
    int *array[] = {&x, &y, &z};

    cout << "X: " << &x << endl;    
    cout << "Y: " << &y << endl;
    cout << "Z: " << &z << endl;
    int fir = 3;
    for (int i = 0; i < fir; i++)
    {   
        array[fir] = decrescente(i, array, fir);    
    }

    cout << "No endereço: " << array[0] << ". Está o valor: " << *array[0] << "\n" << "No endereço: " << array[1] << ". Está o valor: " << *array[1] << "\n" << "No endereço: " << array[2] << ". Está o valor: " << *array[2];

}
*/
// Testes de conversão
/*
int main(){
    int a = 65;
    char c = a;
    cout << c;
    return 0;
}*/

//testes de estrutura
/*
struct test {
    char first;
    int second;
};
int main(){
    test bom[5];
    
    for (int i = 0; i < 5; i++)
    {
        bom[i].first = 'a';
    }
    for (int i = 0; i < 5; i++)
    {
        bom[i].second = 0;
    }
    
    for (int i = 0; i < 6; i++)
    {
        cout << bom[i].first << setw(4) << bom[i].second << endl;
    }
    
}*/
/*
int main(){
    string s;
    getline(cin, s);
    char array[10];
    for (int i = 0; i < s.length(); i++)
    {
        array[i] = s[i];
    }

    for (int i = 0; i < s.length(); i++)
    {
        cout <<  array[i] << setw(4);
    }
}*/
// Strings
int main(){
    string s = "abc";
    char a[3];
    s += to_string(9);

    cout << s;
    return 0;
}



// Área de transferência Wind
/*
#include <Windows.h>

#define BOX_ELLIPSE  0 
#define BOX_RECT     1 
 
#define CCH_MAXLABEL 80 
#define CX_MARGIN    12 
 
typedef struct tagLABELBOX {  // box 
    RECT rcText;    // coordinates of rectangle containing text 
    BOOL fSelected; // TRUE if the label is selected 
    BOOL fEdit;     // TRUE if text is selected 
    int nType;      // rectangular or elliptical 
    int ichCaret;   // caret position 
    int ichSel;     // with ichCaret, delimits selection 
    int nXCaret;    // window position corresponding to ichCaret 
    int nXSel;      // window position corresponding to ichSel 
    int cchLabel;   // length of text in atchLabel 
    TCHAR atchLabel[CCH_MAXLABEL]; 
} LABELBOX, *PLABELBOX;

BOOL WINAPI EditCopy(VOID) 
{ 
    PLABELBOX pbox; 
    LPTSTR  lptstrCopy; 
    HGLOBAL hglbCopy; 
    int ich1, ich2, cch; 
 
    if (hwndSelected == NULL) 
        return FALSE; 
 
    // Open the clipboard, and empty it. 
 
    if (!OpenClipboard(hwndMain)) 
        return FALSE; 
    EmptyClipboard(); 
 
    // Get a pointer to the structure for the selected label. 
 
    pbox = (PLABELBOX) GetWindowLong(hwndSelected, 0); 
 
    // If text is selected, copy it using the CF_TEXT format. 
 
    if (pbox->fEdit) 
    { 
        if (pbox->ichSel == pbox->ichCaret)     // zero length
        {   
            CloseClipboard();                   // selection 
            return FALSE; 
        } 
 
        if (pbox->ichSel < pbox->ichCaret) 
        { 
            ich1 = pbox->ichSel; 
            ich2 = pbox->ichCaret; 
        } 
        else 
        { 
            ich1 = pbox->ichCaret; 
            ich2 = pbox->ichSel; 
        } 
        cch = ich2 - ich1; 
 
        // Allocate a global memory object for the text. 
 
        hglbCopy = GlobalAlloc(GMEM_MOVEABLE, 
            (cch + 1) * sizeof(TCHAR)); 
        if (hglbCopy == NULL) 
        { 
            CloseClipboard(); 
            return FALSE; 
        } 
 
        // Lock the handle and copy the text to the buffer. 
 
        lptstrCopy = GlobalLock(hglbCopy); 
        memcpy(lptstrCopy, &pbox->atchLabel[ich1], 
            cch * sizeof(TCHAR)); 
        lptstrCopy[cch] = (TCHAR) 0;    // null character 
        GlobalUnlock(hglbCopy); 
 
        // Place the handle on the clipboard. 
 
        SetClipboardData(CF_TEXT, hglbCopy); 
    } 
 
    // If no text is selected, the label as a whole is copied. 
 
    else 
    { 
        // Save a copy of the selected label as a local memory 
        // object. This copy is used to render data on request. 
        // It is freed in response to the WM_DESTROYCLIPBOARD 
        // message. 
 
        pboxLocalClip = (PLABELBOX) LocalAlloc( 
            LMEM_FIXED, 
            sizeof(LABELBOX) 
        ); 
        if (pboxLocalClip == NULL) 
        { 
            CloseClipboard(); 
            return FALSE; 
        } 
        memcpy(pboxLocalClip, pbox, sizeof(LABELBOX)); 
        pboxLocalClip->fSelected = FALSE; 
        pboxLocalClip->fEdit = FALSE; 
 
        // Place a registered clipboard format, the owner-display 
        // format, and the CF_TEXT format on the clipboard using 
        // delayed rendering. 
 
        SetClipboardData(uLabelFormat, NULL); 
        SetClipboardData(CF_OWNERDISPLAY, NULL); 
        SetClipboardData(CF_TEXT, NULL); 
    } 
 
    // Close the clipboard. 
 
    CloseClipboard(); 
 
    return TRUE; 
}*/