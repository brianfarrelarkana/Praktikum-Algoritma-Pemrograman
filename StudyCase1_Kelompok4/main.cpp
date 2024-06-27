#include <iostream>

using namespace std;

char next;
void skip(){
    cin >> next;
}

int main()

{
    int opsi, pilih;
    int y = 1;
    char x;
    string nama;
    string andra[4] = {"Andra Kujahat", "23 Tahun", "Laki-laki", "Mempunyai katana yang dipajang di dalam rumah dan menurut warga sekitar, kemarin ia mencuci katana yang penuh darah"};
    string hamid[4] = {"Hamid Wahid", "20 Tahun", "Laki-laki", "Warga sekitar melihatnya pergi ke rumah walikota dengan membawa balok kayu saat hari pembunuhan terjadi"};
    string desi[4] = {"Desi Martini", "30 Tahun", "Perempuan", "Penjaga toko jam melaporkan kemarin ia menjual jam tangan yang sama persis seperti milik korban"};

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                            ================\n";
    cout << "                                                                            ! DISCLAIMER !\n";
    cout << "                                                                           ================\n\n";
    cout << "                                                                    Game ini merupakan karya fiksi.\n";
    cout << "                                                Apabila ada kesamaan nama dengan orang di dunia nyata, hidup atau mati,\n";
    cout << "                                                 atau peristiwa nyata maka hal tersebut adalah murni sebuah kebetulan.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "                                                                                                                                         Ketik titik (.) lalu 'Enter' untuk melanjutkan ";
    skip();
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    do
    {
        cout << "                                                               ==========   ==        ==    ========\n";
        cout << "                                                                   ||       ||        ||    ||      \n";
        cout << "                                                                   ||       ||        ||    ||      \n";
        cout << "                                                                   ||       |==========|    |====   \n";
        cout << "                                                                   ||       ||        ||    ||      \n";
        cout << "                                                                   ||       ||        ||    ||      \n";
        cout << "                                                                   ==       ==        ==    ========\n\n";
        cout << "                            =======      ========    ==========    ========       ======   ==========    ==    ==        ==    ========\n";
        cout << "                            ||    \\      ||              ||        ||           //             ||        ||     \\        //    ||      \n";
        cout << "                            ||     \\     ||              ||        ||          //              ||        ||      \\      //     ||      \n";
        cout << "                            ||     ||    |====           ||        |====       ||              ||        ||       \\    //      |====   \n";
        cout << "                            ||     //    ||              ||        ||           \\              ||        ||        \\  //       ||      \n";
        cout << "                            ||    //     ||              ||        ||            \\             ||        ||         \\//        ||      \n";
        cout << "                            ======       ========        ==        ========       ======       ==        ==         ==         ========\n\n";
        cout << "                                                  Ada 5 Ending Dalam Game Ini, Apakah Kamu Bisa Menemukan Semuanya?\n\n";

        cout << "\n                                                                            1. PLAY";
        cout << "\n                                                                            2. CREDITS";
        cout << "\n                                                                            3. QUIT\n";
        cout << "\n                                                                         Masukkan pilihan : "; cin >> opsi;
        cout << endl;

    switch (opsi){

    case 1 :
        cout << " Note : Apabila cerita berhenti silakan ketik titik '.' untuk melanjutkan\n";
        cout << "        Silakan ketik titik dan tekan enter untuk melanjutkan";
        skip();

        cout << "\n\n Backstory :\n\n";
        cout << " 'Kamu merupakan detektif yang baru dipindah tugaskan ke kota kecil bernama Smallville. 19 September 1987,\n";
        cout << "  tepat satu hari setelah kamu dipindah tugaskan, walikota Smallville dikabarkan meninggal dunia dengan\n";
        cout << "  cara yang cukup mengenaskan sehingga para polisi menyimpulkan bahwa sang walikota telah dibunuh.'\n\n";
        skip();

        cout << " 21 September 1987, Jono, ketua polisi setempat mendatangi kantormu\n";
        cout << " _\n\n";
        cout << " (Suara bell berdering yang menandakan seseorang telah membuka pintu)\n\n";
        skip();

        cout << " Jono     : Selamat malam detektif.\n";
        skip();

        cout << " Detektif : Selamat malam pak ada yang bisa saya bantu?\n";
        skip();

        cout << " Jono     : Saya merupakan ketua polisi di Smallville ini anda bisa memanggil saya Opsir Jono, dan saya\n";
        cout << "            membutuhkan bantuan anda untuk menyelesaikan kasus pembunuhan walikota, apakah anda bersedia?\n\n";

        cout << " ------------------------------------------------------------------------------------------------------------------\n";
        cout << " | A : Ya tentu, sebuah kehormatan untuk bisa membantu menyelesaikan kasus ini.                                   |\n";
        cout << " | B : Maaf sepertinya saya belum bisa menerima kasus-kasus terlebih dahulu karena saya baru saja pindah ke sini. |\n";
        cout << " ------------------------------------------------------------------------------------------------------------------\n";
        cout << " Masukkan pilihan A/B : "; cin >> x;
        cout << " =========================\n\n";

        if (x == 'b' || x == 'B'){
            cout << " Selamat anda mendapatkan ending 1 (Coward Ending)\n";
            cout << " Anda dinilai buruk oleh masyarakat karena butuh penyesuaian diri yang lama dan dianggap tidak mampu menyelesaikan kasus-kasus yang berat.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            skip();
        }

        else if (x == 'a' || x == 'A'){
            cout << "\n Jono : Baiklah detektif...\n\n";
            cout << " Masukkan nama pemain : "; cin >> nama;
            cout << " ======================================\n\n";
            cout << "\n "<< nama << " : Oiya maaf saya lupa memperkenalkan diri, anda bisa memanggil saya detektif " << nama << endl;
            skip();

            cout << " Jono : Baiklah detektif " << nama <<" besok akan saya kirimkan berkas-berkas kasus walikota ke kantor anda, katakan saja apabila\n";
            cout << "        anda membutuhkan sesuatu untuk menyelesaikan kasus ini\n\n";
            skip();

            cout << "\n 22 September 1987, Jono, ketua polisi mendatangi kantormu lagi sambil membawa berkas-berkas kasus walikota\n";
            cout << " __\n\n";
            cout << " (Suara bell berdering yang menandakan seseorang telah membuka pintu)\n\n";
            skip();

            cout << " Jono : Selamat pagi detektif, ini berkas-berkas yang anda butuhkan, dan ini segelas kopi hangat untuk menemani anda\n";
            cout << "        memecahkan kasus walikota\n";
            skip();

            cout << " "<< nama <<" : Pagi juga opsir, terima kasih berkas dan kopinya, saya akan berusaha secara maksimal untuk menyelesaikan kasus ini\n";
            cout << "\n (Detektif " << nama << " membuka berkas-berkas yang diberikan oleh opsir Jono)\n\n";
            skip();

            cout << " Informasi yang didapatkan dari berkas (21 September 1987) :\n";
            cout << " A. Data korban\n";
            cout << "    Nama                : Doni Sumarto\n";
            cout << "    Usia	        : 43 Tahun\n";
            cout << "    Jenis Kelamin	: Laki-laki\n";
            cout << "    Hasil Autopsi	: Luka sayatan dan tikaman pada perut, luka memar benda tumpul pada belakang kepala, dan jam tangan korban yang hilang\n";
            skip();

            cout << " B. Data Tersangka\n";
            cout << "    Tersangka 1 :\n";
            cout << "    Nama                : " << andra[0] << endl;
            cout << "    Usia                : " << andra[1] << endl;
            cout << "    Jenis Kelamin       : " << andra[2] << endl;
            cout << "    Bukti               : " << andra[3] << endl;
            cout << "\n    Tersangka 2 :\n";
            cout << "    Nama                : " << hamid[0] << endl;
            cout << "    Usia                : " << hamid[1] << endl;
            cout << "    Jenis Kelamin       : " << hamid[2] << endl;
            cout << "    Bukti               : " << hamid[3] << endl;
            cout << "\n    Tersangka 3 :\n";
            cout << "    Nama                : " << desi[0] << endl;
            cout << "    Usia                : " << desi[1] << endl;
            cout << "    Jenis Kelamin       : " << desi[2] << endl;
            cout << "    Bukti               : " << desi[3] << endl;
            cout << "\n";
            skip();

            cout << "\n " << nama << " : Hhmm... sepertinya saya harus mengintrogasi para tersangka ini\n\n";

            do
            {
                cout << " ----------------------\n";
                cout << " | 1. Introgasi Andra |\n";
                cout << " | 2. Introgasi Hamid |\n";
                cout << " | 3. Introgasi Desi  |\n";
                cout << " | 4. Lanjut Cerita   |\n";
                cout << " ----------------------\n";
                cout << " Masukan pilihan : "; cin >> pilih;
                cout << " =====================\n\n";
                y++;
            switch (pilih){

            case 1 :
                cout << "\n " << nama << " : Baik pak Andra saya akan menanyakan beberapa pertanyaan, tolong kerjasamanya\n";
                cout << "\n Andra : Baik Detektif\n";
                skip();

                cout << " " << nama << " : Apa pekerjaan anda?\n";
                skip();

                cout << " Andra : Saya adalah salah satu pemburu di Smallville\n";
                skip();

                cout << " " << nama << " : Apa hubungan anda dengan korban?\n";
                skip();

                cout << " Andra : Hubungan saya dengan korban hanyalah penjual dan pembeli, korban sering membeli hasil-hasil buruan saya,\n";
                cout << "         seperti kulit & tanduk rusa, kepala beruang, dll.\n";
                skip();

                cout << " " << nama << " : Apakah akhir-akhir ini anda memiliki masalah dengan korban?\n";
                skip();

                cout << " Andra : Ya, dia selalu menginginkan katana milik saya padahal sudah saya bilang benda itu tidak untuk dijual,\n";
                cout << "         namun ia selalu menawariku sesuatu untuk ditukar dengan katana itu dan hal itu membuatku ingin mencabik-cabiknya dengan katanaku\n";
                skip();

                cout << " " << nama << " : Dimana anda berada saat pukul 22.00 tanggal 19 September lalu?\n";
                skip();

                cout << " Andra : Setiap jam 10 malam saya biasanya melakukan meditasi di halaman belakang\n";
                skip();

                cout << " " << nama << " : Apakah anda memiliki bukti bahwa anda melakukan meditasi di saat pembunuhan terjadi?\n";
                skip();

                cout << " Andra : Pergilah ke rumahku dan cek CCTV halaman belakang\n";
                cout << "\n (Rekaman CCTV menunjukkan Andra memang sedang meditasi waktu itu)\n";
                skip();

                cout << " " << nama << " : Kenapa anda memiliki sebuah katana dan apakah benar kemarin anda mencuci katana tersebut karena noda darah?\n";
                skip();

                cout << " Andra : Karena saya memang menyukai katana & berniat untuk mengoleksinya. Ya, benar kemarin saya mencucinya karena entah kenapa\n";
                cout << "         ketika saya bangun saya melikhat katana saya berlumuran darah tergeletak di lantai tempat saya menyimpan hasil buruan saya,\n";
                cout << "         padahal saya selalu meletakkan katana saya di kotak kaca ruang tamu\n";
                skip();

                break;

            case 2 :
                cout << " " << nama << " : Baik pak Hamid saya akan menanyakan beberapa pertanyaan, tolong kerjasamanya\n";
                cout << "\n Hamid : Selama saya bisa menjawab, maka akan saya jawab detektif\n";
                skip();

                cout << " " << nama << " : Apa pekerjaan anda?\n";
                skip();

                cout << " Hamid : Saya adalah orang yang merenovasi bangunan-bangunan di kota kecil ini\n";
                skip();

                cout << " " << nama << " : Apa hubungan anda dengan korban?\n";
                skip();

                cout << " Hamid : Korban sering menggunakan jasa renovasi saya\n";
                skip();

                cout << " " << nama << " : Berarti saat pembunuhan terjadi anda sedang merenovasi rumah korban?\n";
                skip();

                cout << " Hamid : Iya, korban minta dibuatkan rumah pohon di belakang rumah untuk anaknya\n";
                skip();

                cout << " " << nama << " : Apakah akhir-akhir ini anda memiliki masalah dengan korban?\n";
                skip();

                cout << " Hamid : Saya rasa tidak, tetapi saya sempat melihat korban beberapa kali berdebat dengan Desi, ART nya.\n";
                cout << "         Sepertinya Desi meminta kenaikan gaji karena anak korban susah diurus.\n";
                skip();

                break;

            case 3 :
                cout << " Desi : Tolong saya detektif, saya menjual jam milik pak Doni atas perintah istrinya, saya tidak berbuat apa-apa detektif,\n";
                cout << "        tolong saya. (sembari menangis tersedu-sedu)\n\n";

                cout << " --------------------------------------------------------------------------\n";
                cout << " | A. Bisakah anda jelaskan kronologinya?                                 |\n";
                cout << " | B. Hentikan dramamu, aku tidak akan terpancing oleh air mata palsu itu |\n";
                cout << " --------------------------------------------------------------------------\n";
                cout << " Masukkan pilihan : "; cin >> x;
                cout << " =====================\n\n";

            if (x == 'b' || x == 'B'){
                    cout << " Desi : Te...tetapi saya mengatakan yang sejujurnya, tolong detektif, saya tidak bersalah.\n";
                    cout << "\n " << nama << " : Orang yang bersalah pasti juga akan mengatakan hal yang sama.\n";
                    skip();

                    cout << " ------------------------------------------\n";
                    cout << " | A. Bisakah anda jelaskan kronologinya? |\n";
                    cout << " | B. Kembali                             |\n";
                    cout << " ------------------------------------------\n";
                    cout << " Masukkan pilihan : "; cin >> x;
                    cout << " =====================\n\n";

                    if (x == 'a' || x == 'A'){
                        cout << " Desi : Pada pagi hari setelah pak Doni dibunuh, bu Citra tiba-tiba memberikan jam tangan pak Doni pada saya &\n";
                        cout << "        menyuruh saya untuk menjualnya di toko jam & memberi saya 25% uang hasil jual jam tersebut.\n";
                        skip();

                        cout << "\n " << nama << " : Kenapa anda menuruti perintah bu Citra? Apakah karena anda membutuhkan uang?\n";
                        skip();

                        cout << " Desi : I...iya\n";
                        skip();

                    } else if (x == 'b' || x == 'B'){
                    } else {
                        cout << " Inputan anda salah\n\n";
                    }

            } else if (x == 'a' || x == 'A'){
                cout << " Desi : Pada pagi hari setelah pak Doni dibunuh, bu Citra tiba-tiba memberikan jam tangan pak Doni pada saya &\n";
                cout << "        menyuruh saya untuk menjualnya di toko jam & memberi saya 25% uang hasil jual jam tersebut.\n";
                skip();

                cout << "\n " << nama << " : Kenapa anda menuruti perintah bu Citra? Apakah karena anda membutuhkan uang?\n";
                skip();

                cout << " Desi : I...iya\n";
                skip();

                cout << " --------------------------------------------------------------------------------------------------------------------\n";
                cout << " | A. Hentikan dramamu, aku tidak akan terpancing oleh air mata palsu itu                                           |\n";
                cout << " | B. Kamu merasa penasaran dengan kronologi yang di ceritakan Desi sehingga memilih untuk menginterogasi Bu Citra  |\n";
                cout << " | C. Kembali                                                                                                       |\n";
                cout << " --------------------------------------------------------------------------------------------------------------------\n";
                cout << " Masukkan pilihan : "; cin >> x;
                cout << " =====================\n\n";

                if (x == 'a' || x == 'A'){
                    cout << " Desi : Te...tetapi saya mengatakan yang sejujurnya, tolong detektif, saya tidak bersalah.\n";
                    cout << "\n " << nama << " : Orang yang bersalah pasti juga akan mengatakan hal yang sama.\n";
                    skip();
                } else if (x == 'b' || x == 'B'){
                    cout << " Joni: Bagaimana detektif? Apakah anda sudah menyimpulkan siapa pembunuhnya?\n";
                    skip();

                    cout << "\n " << nama << " : Tunggu dulu opsir, masih ada yang perlu saya interogasi.\n\n";
                    cout << " (Detektif " << nama << " pergi ke rumah Bu Citra untuk menginterogasinya)\n";
                    skip();

                    cout << " \n " << nama << " : Selamat malam bu Citra\n\n";
                    cout << " Citra : Malam detektif, ada yang bisa saya bantu?\n";
                    skip();

                    cout << "\n " << nama << " : Saya ingin menanyakan beberapa hal terkait kasus pembunuhan suami anda.\n";
                    skip();

                    cout << " Citra : Hahaha, kau sangat lucu detektif\n";
                    skip();

                    cout << " (Detektif " << nama << " kebingungan)\n";
                    skip();

                    cout << " Citra : Bukankah kau yang memintaku membayar Desi untuk melakukan pekerjaan kotor ini\n";
                    cout << "         supaya kau bisa terkenal di kota ini dan menikahiku? Benar kan sayang?\n";
                    skip();

                    cout << "\n " << nama << " : Apa? Kapan? Bagaimana?\n";
                    skip();

                    cout << " Citra : Tenanglah detektif, jadilah dirimu sendiri, maksudku bukan dirimu yang lemah dan polos ini,\n";
                    cout << "         tetapi dirimu yang satunya.\n";
                    skip();

                    cout << " (Detektif " << nama << " kebingungan dan mulai merasa sakit kepala lalu pingsan)\n";
                    skip();

                    cout << "\n " << nama << " : Ahh, apa yang terjadi?\n";
                    skip();

                    cout << " Citra : Apakah itu kamu sayang?\n";
                    skip();

                    cout << "\n " << nama << " : hmmm... Apakah rencana kita telah berhasil?\n";
                    skip();

                    cout << " Citra : Ya, kau hanya perlu memasukkan Desi ke penjara dan rencana kita berhasil.\n\n";
                    skip();

                    cout << " Selamat anda mendapatkan ending 5 (True Ending), anda merupakan seseorang yang memiliki kepribadian ganda,\n";
                    cout << " dan kepribadian anda yang lain lah yang merencanakan semua ini.\n\n";
                    cout << " Desi dipenjara dan anda menikah dengan Bu Citra, tapi ingat apabila seseorang menyembunyikan bangkai\n";
                    cout << " maka lama kelamaan baunya akan tercium.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                    skip();

                } else if (x == 'c' || x == 'C'){
                } else {
                    cout << " Inputan anda salah\n\n";
                }

            } else {
                cout << " Inputan anda salah\n\n";
            }
                break;
            }
            } while (pilih < 4);

                            cout << "\n *Point of no return (Tidak bisa kembali)\n";
                skip();

                cout << " Kamu telah menginterogasi para tersangka, menurutmu siapakah pelakunya?\n";
                cout << " ------------\n";
                cout << " | A. Andra |\n";
                cout << " | B. Hamid |\n";
                cout << " | C. Desi  |\n";
                cout << " ------------\n";
                cout << " Masukkan pilihan : "; cin >> x;
                cout << " =====================\n\n";

                if (x == 'a' || x == 'A'){
                        cout << "\n " << nama << " : Saya telah menemukan pelakunya opsir.\n\n";
                        cout << " Jono : Katakan detektif, siapa pelakunya?\n";
                        skip();

                        cout << "\n " << nama << " : Pelakunya adalah Andra Kujahat\n";
                        skip();

                        cout << " Jono : Kenapa bisa begitu detektif?\n";
                        skip();

                        cout << "\n " << nama << " : Jadi, menurut saya kronologinya seperti ini, pada malam saat pembunuhan,\n";
                        cout << "        pak Andra pergi ke rumah walikota untuk melakukan transaksi hasil buruannya..\n";
                        skip();

                        cout << " Jono : Tunggu dulu detektif, hasil buruan?\n\n";
                        cout << "\n " << nama << " : iya.\n";
                        skip();

                        cout << " Jono : Tetapi pemburu resmi di kota ini hanyalah Joni, kembaran saya,\n";
                        cout << "        itu berarti pak Andra merupakan pemburu illegal.\n";
                        skip();

                        cout << " Selamat anda mendapatkan ending 2 (Mystery Ending), anda berhasil menangkap pemburu illegal di kota,\n";
                        cout << " namun siapakah pembunuhnya??\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        skip();

                } else if (x == 'b' || x == 'B'){
                        cout << "\n " << nama << " : Saya telah menemukan pelakunya opsir.\n\n";
                        cout << " Jono : Katakan detektif, siapa pelakunya?\n";
                        skip();

                        cout << "\n " << nama << " : Pelakunya adalah Hamid Wahid.\n";
                        skip();

                        cout << " Jono : Kenapa bisa begitu detektif?\n";
                        skip();

                        cout << "\n " << nama << " : Jadi menurut saya seperti ini kronologinya, pada malam pembunuhan, pak Hamid sedang merenovasi rumah korban\n";
                        cout << "        lalu ia melihat jam mahal yang dipakai oleh korban sehingga ingin menjualnya supaya ia mendapat uang lebih, ia memukul keras\n";
                        cout << "        bagian belakang kepala korban hingga pingsan, lalu mengambil jam tangannya dan menjualnya di toko. ia juga merekayasa penjaga toko\n";
                        cout << "        dengan memberinya upah untuk mengatakan bahwa yang menjual jam adalah Desi dan mengambil katana milik pak Andra\n";
                        cout << "        saat pak Andra sedang bermeditasi untuk membunuh korban.\n";
                        skip();

                        cout << " Jono : Apakah anda yakin detektif? Pak Hamid dikenal sebagai orang yang baik.\n";
                        skip();

                        cout << "\n " << nama << " : Ya opsir. Saya yakin. Karena setiap orang akan rela melakukan apa saja demi uang, terutama saat mereka membutuhkannya.\n\n";
                        cout << " Jono : Baiklah detektif jika itu yang kau katakan.\n\n";
                        skip();

                        cout << " Selamat anda mendapatkan ending 3 (Bad Ending), anda berhasil memasukkan pak Hamid ke penjara,\n";
                        cout << " tapi tunggu dulu, beberapa hari setelah investigasi anda sang opsir memanggil detektif lain\n";
                        cout << " untuk menginvestigasi kembali kasus ini dan ia berhasil menangkap pembunuh yang sesungguhnya,\n";
                        cout << " anda pun diusir oleh warga karena dianggap telah menuduh orang yang tidak bersalah.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        skip();

                } else if (x == 'c' || x == 'C'){
                        cout << "\n " << nama << " : Saya telah menemukan pelakunya opsir.\n\n";
                        cout << " Jono : Katakan detektif, siapa pelakunya?\n";
                        skip();

                        cout << "\n " << nama << " : Pelakunya adalah Desi Martini.\n";
                        skip();

                        cout << " Jono : Kenapa bisa begitu detektif?\n";
                        skip();

                        cout << "\n " << nama << " : Jadi pertama pak Hamid melihat Desi beradu mulut dengan korban mengenai kenaikan gaji,\n";
                        cout << "        namun korban tidak memberinya kenaikan gaji. sehingga saat pak Hamid sudah pulang di malam\n";
                        cout << "        hari, Desi melancarkan aksinya, ia memukul kepala belakang korban dengan kayu renovasi pak Hamid\n";
                        cout << "        sehingga korban tidak sadarkan diri, lalu dilanjutkan dengan serangan menggunakan pisau dapur\n";
                        cout << "        yang membabi buta dan ia mengambil jam tangan dari korban yang sudah tidak bernyawa.\n";
                        cout << "        Setelah itu Desi merekayasa katana milik pak Andra saat pak Andra bermeditasi.\n";
                        cout << "        Ia menggosok katana milik pak Andra dengan kain yang berisi darah korban, lalu saat ia akan\n";
                        cout << "        mengembalikannya ke kotak kaca ia mendengar pak Andra selesai bermeditasi, jadi ia panik\n";
                        cout << "        dan membawa katana itu ke luar rumah lalu meletakkannya di ruang tempat pak Andra menyimpan hasil buruannya\n";
                        skip();

                        cout << " Jono: Motif yang kuat, serta kronologi dan bukti yang meyakinkan. Desi juga terus mengatakan ia\n";
                        cout << "       tak bersalah dan hal ini semakin membuat saya yakin bahwa ia pelakunya, ia terlihat paling sibuk\n";
                        cout << "       diantara 3 tersangka.\n\n";
                        skip();

                        cout << " Selamat anda mendapatkan ending 4 (Good Ending), anda berhasil menangkap pembunuh walikota\n";
                        cout << " dan menikahi istrinya. Tunggu dulu, menikahi istri walikota? Ada yang janggal di sini...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        skip();

                } else {
                    cout << " Inputan anda salah\n\n";
                }

            } else {
            cout << " Inputan anda salah\n\n";
        }
        break;


    case 2 :
        cout << "                                                                             Dibuat oleh :\n\n";
        cout << "                                                                 Iswatun Maimanah	(2211102327)\n";
        cout << "                                                                 Azfa Fairuzia Hartoyo	(2211102328)\n";
        cout << "                                                                 Fikri Ahmad Zidane	(2211102336)\n";
        cout << "                                                                 Brian Farrel Arkana	(2211102352)\n";
        cout << "                                                                 Muhamad Raihan Annaji	(2211102358)\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    break;

    case 3 :
        cout << "                                                              Terima kasih telah memainkan The Detective.\n";
        cout << "                                               Selamat apabila anda telah menemukan kelima ending yang ada di game ini.\n";
    break;
}
    }   while (opsi < 3);

    return 0;


}
