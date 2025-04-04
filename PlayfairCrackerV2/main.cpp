#include <iostream>
#include "Cracker.h"

int main()
{
    auto &cracker = Cracker::get_istance("ABCDEFGHIKLMNOPQRSTUVWXYZ", "EDELDFTOFTZGQDYUDNZGKVBRTETMDLEUDHEDHYCDHRNZKICBIKTEHTZTNPUNELELNELANHTQOCZGRYFUNIEFANINCBDNFYELIHCBIKTEHTPZLPNDBCKFZKNIEFGIEFAXLPIYGZFGTONQBFCUIYXZVALNNUKCRTCTMIYFHQGAWIHAIGNRGNEFNDBCKFZKHLKIBITCNHKMNTIYELNDGIKGODOFDNPLETVALNELDVNDBCKFZKHLKIBITCTFCDDWDNTQCFUNTYCVDTHDTQFYMLRLWACEININNIEMBCPFCZIALEBINPEFPLETNUKCRTCTMINYOINECOAOCTDZGTIHCERTEDFHDHNHILCERTHDDINDGIKGODOFDNPLETYIAGOEMLCFCFCFHLENTIEFNDBCKFZKHLKIBITCNERZRGNIEOBFZKNAHYLNOCOIGAEIGTIHCERTWNBRTETYEDELNVLNDHFUDHELDHNHDZELTKHFABKFVFDIBFXIOZASCEKVKNIYDNOFRZCGWYKOUYZCTDDZELNDGIKGODOFDNPLETHATCBDNDRLNIBUGIKCFLNYIREFAPNYTDLPNGNYBQEIINLDKCFLNYIREFAPHLENTIEFNDBCKFZKHLKIBITCNDLPNGNYBQEIINAXARNLVYZCIGQVPFCBNGKCNLCSELNFRLNECOAONYNBVKPFELNFNLZGTMFGEIINLDEFIYGZFGTOYITMCNNBKCARHFIGIKHFLDEFPVEILMZORLFDYFHDBFCINYNHDZELFVHATCBDNDRLDFTOFTLDAREYTKLMCNTIEFNDBCKFZKHLKIBITCNFKCFTDGTOFTLATHKNTYPGKCRLTFHDNTGNEFIYGZFGTOYITMCNNBKCHDELTFHDNTENZGHLKIEDELNVCFHTCDHFCDSEEFQDHWTMILCBIODIEFVAGCDHEUDHPLETELDVNDBCKFZKHLKIBITCNESEEFYIAGYINVCFNRHDZGGCNHHFINAVLNDHNYTBGIALKCFLELNEWISTNIGIEFIGAYIGCGKUYFLCEIGTIHCERTHDDIFILNBFVWIFTABNYINIARIGIATMIYLDNTELNDGIKGODOFDNNYNXARELNWMNDNTIEFDIARPNRZTZNABFCIFKEDYLDTLRYNANPNRFZIIGNRPAEFDEOFELNFUYDIMTFVNHNLRZTZCNTIEFNDBCKFZKHLKIBITCIFOHKCLQNIEFGATZDVNFKCELNDGIKGODOFDNPLETBFWCHDKGNDBCKFZKNYIXSTGNEFGATZDVNFKCBHFKKEHTPLANGNEFDHIYHQKCKLCBIKTEHTBLEDDNNRYLEDNYERTKINDRCDGRTMARAQINNILMWNCQHTTROUIMDEHFKTDIEFKZDWIYGFNBUNRZTZDVFVFETMCNBQIHCWMTELTKIEVFEUNICFZOLEWKMTHLNISANYPLDTHCFHDHDLOIMKHCFHDHDLOIMKHLENTIEFIYTQFGTOYINFKCHFDNHFDBYINHYPELEDOLHZDHEDBFXCCTMFBFXCNIEFZGWKETTMILCBIKDIEFVAGCDHEUDHEKELIHHTHFHDZGHLKIYIELNVCFHTCDHFLDEFNDBCKFZKHLKIBITCNHTPVNHDEBBCPFCZIALEBINPTKARRZHGNHZGWKYIHYLNDUOCAOCTDZGTIHCERTVATCNFKCCTFEDHNEDIEFCDHFHBDVTHEDFLWIBLBOBUBIGBDV");

    cracker.crack();

    std::cout << "Plaintext: " << cracker.get_text() << std::endl;
}

