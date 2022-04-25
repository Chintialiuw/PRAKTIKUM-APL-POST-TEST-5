//Standard Library C++
#include <iostream> //Untuk menampilkan perintah cin, cout, dan endl
#include <conio.h> //Untuk menampilkan perintah getch dan system("cls")
#include <stdlib.h> //Untuk menampilkan perintah atoi (mengubah string menjadi integer)

//Standard Library C++
using namespace std;

//Prosedur atau Fungsi untuk menampilkan tampilan awal program
void intro()
{
    cout<<"=========================================================================="<<endl;
	cout<<"                      Program Pendataan Hewan Kurban                      "<<endl;
    cout<<"=========================================================================="<<endl;
    cout<<"                 Silahkan Isi Data Hewan Terlebih Dahulu !                "<<endl;
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu
void pilih_menu()
{
    cout<<"Silahkan Pilih Menu"<<endl;
    cout<<"[1] Menampilkan Data"<<endl;
    cout<<"[2] Menambahkan Data"<<endl;
    cout<<"[3] Mengedit Data"<<endl;
    cout<<"[4] Menghapus Data"<<endl;
    cout<<"[5] Mengurutkan Data"<<endl;
    cout<<"[6] Keluar"<<endl;
}

//Prosedur atau Fungsi untuk menampilkan pilihan hewan
void pilih_hewan()
{
    cout<<"[A] Sapi"<<endl;
    cout<<"[B] Kambing"<<endl;
    cout<<"\nMasukkan dengan Huruf Kapital !"<<endl;
}

//Struct untuk menampung data pada Sapi
struct sapi
{
    string nama;
    int umur;
    float berat;
    int harga;
};

//Struct untuk menampung data pada Kambing
struct kambing
{
    string nama;
    int umur;
    float berat;
    int harga;
};

//Deklarasi Array di dalam Struct pada data Sapi dan Kambing (Variabel Global)
struct sapi Sapi[5];
struct kambing Kambing[5];

//Prosedur atau Fungsi untuk menampilkan menu "Isi Data" pada "Sapi"
void isi_data_sapi()
{
    int i = 0;
    
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                                 Data Sapi                                "<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;

    for (i = 0; i < 4; i++)
    {
        cout<<"Sapi Nomor "<<i+1<<endl;
        cout<<"Nama     : ";

        //fflush(stdin) digunakan untuk menyimpan data yang telah diinputkan oleh user
        //pada program agar tidak terjadi hambatan pada saat dipanggil
        cin>>Sapi[i].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Sapi[i].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Sapi[i].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Sapi[i].harga;fflush(stdin);
        cout<<endl;
    }
}

//Prosedur atau Fungsi untuk menampilkan menu "Isi Data" pada "Kambing"
void isi_data_kambing()
{
    int i = 0;

    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                                Data Kambing                              "<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    
    for (i = 0; i < 4; i++)
    {
        cout<<"Kambing Nomor "<<i+1<<endl;
        cout<<"Nama     : ";
        cin>>Kambing[i].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Kambing[i].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Kambing[i].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Kambing[i].harga;fflush(stdin);
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
    cout<<"                          Data Berhasil Tersimpan                         "<<endl;
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";

    //Untuk memberi jeda
    getch();

    //Untuk membersihkan atau menghapus hasil sebelumnya agar tidak penuh 
    //pada layar windows
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan menu "Tampil Data" pada "Sapi"
void tampil_data_sapi()
{
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        cout<<"Sapi Nomor "<<i+1<<endl;
        cout<<"Nama     : "<<Sapi[i].nama<<endl;
        cout<<"Umur     : "<<Sapi[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Sapi[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Sapi[i].harga<<endl;
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
}

//Prosedur atau Fungsi untuk menampilkan menu "Tampil Data" pada "Kambing"
void tampil_data_kambing()
{
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        cout<<"Kambing Nomor "<<i+1<<endl;
        cout<<"Nama     : "<<Kambing[i].nama<<endl;
        cout<<"Umur     : "<<Kambing[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Kambing[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Kambing[i].harga<<endl;
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
}

//Prosedur atau Fungsi untuk menampilkan menu Tampil Data secara Keseluruhan
void tampil_data()
{
    int i = 0;
    string pilih;

    cout<<"Silahkan Pilih Data Hewan yang ingin ditampilkan"<<endl;
    pilih_hewan();

    cout<<"Masukkan Pilihan Data [A/B] : ";
    cin>>pilih;
    cout<<"=========================================================================="<<endl;
    if (pilih == "A")
    {
        tampil_data_sapi();
    }
    else if (pilih == "B")
    {
        tampil_data_kambing();
    }
    else 
    {
        cout<<"Mohon Maaf Data Hewan yang Anda Pilih Tidak Tersedia"<<endl;
        cout<<"=========================================================================="<<endl;
    }
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan menu "Tambah Data"
void tambah_data()
{
    string pilih;
    int i = 4;

    cout<<"Silahkan Pilih Data Hewan yang ingin ditambahkan"<<endl;
    pilih_hewan();
    cout<<"Masukkan Pilihan Data [A/B] : ";
    cin>>pilih;
    cout<<"=========================================================================="<<endl;
    if (pilih == "A")
    {
        cout<<"Nama     : ";
        cin>>Sapi[i].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Sapi[i].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Sapi[i].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Sapi[i].harga;fflush(stdin);
        cout<<"=========================================================================="<<endl;
        cout<<"                         Data Berhasil Ditambahkan                        "<<endl;
    }
    else if (pilih == "B")
    {
        cout<<"Nama     : ";
        cin>>Kambing[i].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Kambing[i].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Kambing[i].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Kambing[i].harga;fflush(stdin);
        cout<<"=========================================================================="<<endl;
        cout<<"                         Data Berhasil Ditambahkan                        "<<endl;
    }
    else 
    {
        cout<<"Mohon Maaf Data Hewan yang Anda Pilih Tidak Tersedia";
    }
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan menu "Edit Data"
void edit_data()
{
    int indeks, i;
    string pilih;

    cout<<"Silahkan Pilih Data Hewan yang ingin diperbarui"<<endl;
    pilih_hewan();
    cout<<"Masukkan Pilihan Data [A/B] : ";
    cin>>pilih;
    cout<<"=========================================================================="<<endl;
    if (pilih == "A")
    {
        tampil_data_sapi();
        cout<<"Masukkan Nomor Sapi yang ingin diperbarui : ";
        cin>>indeks;
        cout<<"=========================================================================="<<endl;
        i = indeks - 1;
        cout<<"Nama     : ";
        cin>>Sapi[i].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Sapi[i].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Sapi[i].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Sapi[i].harga;fflush(stdin);
        cout<<"=========================================================================="<<endl;
        cout<<"                          Data Berhasil Diperbarui                        "<<endl;
    }
    else if (pilih == "B")
    {
        tampil_data_kambing();
        cout<<"Masukkan Nomor Kambing yang ingin diperbarui : ";
        cin>>indeks;
        cout<<"=========================================================================="<<endl;
        i = indeks - 1;
        cout<<"Nama     : ";
        cin>>Kambing[i].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Kambing[i].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Kambing[i].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Kambing[i].harga;fflush(stdin);
        cout<<"=========================================================================="<<endl;
        cout<<"                          Data Berhasil Diperbarui                        "<<endl;
    }
    else 
    {
        cout<<"Mohon Maaf Data Hewan yang Anda Pilih Tidak Tersedia";
    }
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan menu "Hapus Data"
void hapus_data()
{
    int hapus, i;
    string pilih;

    cout<<"Silahkan Pilih Data Hewan yang ingin dihapus"<<endl;
    pilih_hewan();
    cout<<"Masukkan Pilihan Data [A/B] : ";
    cin>>pilih;
    cout<<"=========================================================================="<<endl;
    if (pilih == "A")
    {
        tampil_data_sapi();
        cout<<"Masukkan Nomor Sapi yang ingin dihapus : ";
        cin>>hapus;
        if (hapus < 6)
        {
            for (i = hapus - 1; i < 4 ; i++)
            {
                Sapi[i] = Sapi [i + 1];fflush(stdin);
            }
            cout<<"=========================================================================="<<endl;
            cout<<"                            Data Berhasil Dihapus                         "<<endl;
        }
        else 
        {
            cout<<"Mohon Maaf Nomor Sapi yang dimasukkan Tidak Tersedia"<<endl;
        }
    }
    else if (pilih == "B")
    {
        tampil_data_kambing();
        cout<<"Masukkan Nomor Kambing yang ingin dihapus : ";
        cin>>hapus;
        if (hapus < 6)
        {
            for (i = hapus - 1; i < 4 ; i++)
            {
                Kambing[i] = Kambing [i + 1];fflush(stdin);
            }
            cout<<"=========================================================================="<<endl;
            cout<<"                            Data Berhasil Dihapus                         "<<endl;
        }
        else 
        {
            cout<<"Mohon Maaf Nomor Kambing yang dimasukkan Tidak Tersedia"<<endl;
        }
    }
    else 
    {
        cout<<"Mohon Maaf Data Hewan yang Anda Pilih Tidak Tersedia";
    }
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan menu "Pengurutan atau Sorting" pada "Umur Sapi" secara "Ascending"
void Bubble_Sort_ASC_Umur_Sapi()
{
    int i, j, tukar;

    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 5 - i - 1; j++)
        {
            if(Sapi[i].umur > Sapi[j+1].umur)
            {
                tukar = Sapi[j].umur;
                Sapi[j].umur = Sapi[j+1].umur;
                Sapi[j+1].umur = tukar;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        cout<<"Sapi Nomor "<<i+1<<endl;
        cout<<"Nama     : "<<Sapi[i].nama<<endl;
        cout<<"Umur     : "<<Sapi[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Sapi[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Sapi[i].harga<<endl;
        cout<<endl;
    }
     cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan menu "Pengurutan atau Sorting" pada "Umur Kambing" secara "Ascending"
void Bubble_Sort_ASC_Umur_Kambing()
{
    int i, j, tukar;

    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 5 - i - 1; j++)
        {
            if(Sapi[i].umur > Kambing[j+1].umur)
            {
                tukar = Kambing[j].umur;
                Kambing[j].umur = Kambing[j+1].umur;
                Kambing[j+1].umur = tukar;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        cout<<"Kambing Nomor "<<i+1<<endl;
        cout<<"Nama     : "<<Kambing[i].nama<<endl;
        cout<<"Umur     : "<<Kambing[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Kambing[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Kambing[i].harga<<endl;
        cout<<endl;
    }
     cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan menu "Pengurutan atau Sorting" pada "Umur Sapi" secara "Descending"
void Bubble_Sort_DSC_Umur_Sapi()
{
    int i, j, k, tukar;
    k = 1;

    for (i = 5; i > 0; i--)
    {
        for(j = 5; j > 0; j--)
        {
            if(Sapi[j].umur < Sapi[j-1].umur)
            {
                tukar = Sapi[j].umur;
                Sapi[j].umur = Sapi[j-1].umur;
                Sapi[j-1].umur = tukar;
            }
        }
    }
    for (i = 5; i > 0; i--)
    {
        cout<<"Sapi Nomor "<<k+1<<endl;
        k++;
        cout<<"Nama     : "<<Sapi[i].nama<<endl;
        cout<<"Umur     : "<<Sapi[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Sapi[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Sapi[i].harga<<endl;
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan menu "Pengurutan atau Sorting" pada "Umur Kambing" secara "Descending"
void Bubble_Sort_DSC_Umur_Kambing()
{
    int i, j, k, tukar;
    k = 1;

    for (i = 5; i > 0; i--)
    {
        for(j = 5; j > 0; j--)
        {
            if(Sapi[j].umur < Kambing[j-1].umur)
            {
                tukar = Kambing[j].umur;
                Kambing[j].umur = Kambing[j-1].umur;
                Kambing[j-1].umur = tukar;
            }
        }
    }
    for (i = 5; i > 0; i--)
    {
        cout<<"Kambing Nomor "<<k+1<<endl;
        k++;
        cout<<"Nama     : "<<Kambing[i].nama<<endl;
        cout<<"Umur     : "<<Kambing[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Kambing[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Kambing[i].harga<<endl;
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk melakukan penukaran pada data "Nama Sapi" agar terurut
void Urut_Bubble_Sort_ASC_Nama_Sapi(int a, sapi Sapi[5])
{
    int i, j, l;
    sapi temp;
    for (i = 0; i < a; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            for (l = 0; l < 10; l++)
            {
                if (Sapi[i].nama[l] < Sapi[j].nama[l])
                {
                    break;
                }
                else if (Sapi[i].nama[l] > Sapi[j].nama[l])
                {
                    temp = Sapi[i];
                    Sapi[i] = Sapi[j];
                    Sapi[j] = temp;
                    break;
                }
            }
        }
    }
}

//Prosedur atau Fungsi untuk melakukan penukaran pada data "Nama Kambing" agar terurut
void Urut_Bubble_Sort_ASC_Nama_Kambing(int a, kambing Kambing[5])
{
    int i, j, l;
    kambing temp;
    for (i = 0; i < a; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            for (l = 0; l < 10; l++)
            {
                if (Kambing[i].nama[l] < Kambing[j].nama[l])
                {
                    break;
                }
                else if (Kambing[i].nama[l] > Kambing[j].nama[l])
                {
                    temp = Kambing[i];
                    Kambing[i] = Kambing[j];
                    Kambing[j] = temp;
                    break;
                }
            }
        }
    }
}

//Prosedur atau Fungsi untuk menampilkan menu "Pengurutan atau Sorting" pada "Nama Sapi" secara "Ascending"
void Bubble_Sort_ASC_Nama_Sapi()
{
    int x, i;
    char jumlah[5];
    cout<<"Masukkan Jumlah Data yang ingin diurut : ";
    cin>>jumlah;
    cout<<"=========================================================================="<<endl;

    x = atoi (jumlah);
    Urut_Bubble_Sort_ASC_Nama_Sapi(x, Sapi);

    for (i = 0; i < x; i++)
    {
        cout<<"Sapi Nomor "<<i+1<<endl;
        cout<<"Nama     : "<<Sapi[i].nama<<endl;
        cout<<"Umur     : "<<Sapi[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Sapi[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Sapi[i].harga<<endl;
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan menu "Pengurutan atau Sorting" pada "Nama Kambing" secara "Ascending"
void Bubble_Sort_ASC_Nama_Kambing()
{
    int x, i;
    char jumlah[5];
    cout<<"Masukkan Jumlah Data yang ingin diurut : ";
    cin>>jumlah;
    cout<<"=========================================================================="<<endl;

    x = atoi (jumlah);
    Urut_Bubble_Sort_ASC_Nama_Kambing(x, Kambing);

    for (i = 0; i < x; i++)
    {
        cout<<"Kambing Nomor "<<i+1<<endl;
        cout<<"Nama     : "<<Kambing[i].nama<<endl;
        cout<<"Umur     : "<<Kambing[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Kambing[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Kambing[i].harga<<endl;
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk melakukan penukaran pada data "Nama Sapi" agar terurut
void Urut_Bubble_Sort_DSC_Nama_Sapi(int a, sapi Sapi[5])
{
    int i, j, l;
    sapi temp;
    for (i = 5; i > a; i--)
    {
        for (j = i - 1; j > a; j--)
        {
            for (l = 10; l > 0; l--)
            {
                if (Sapi[i].nama[l] > Sapi[j].nama[l])
                {
                break;
                }
                else if (Sapi[i].nama[l] < Sapi[j].nama[l])
                {
                    temp = Sapi[i];
                    Sapi[i] = Sapi[j];
                    Sapi[j] = temp;
                    break;
                }
            }
        }
    }
}

//Prosedur atau Fungsi untuk melakukan penukaran pada data "Nama Kambing" agar terurut
void Urut_Bubble_Sort_DSC_Kambing(int a, kambing Kambing[5])
{
    int i, j, l;

    //Temp digunakan sebagai tempat penyimpanan sementara
    kambing temp;
    for (i = 5; i > a; i--)
    {
        for (j = i - 1; j > a; j--)
        {
            for (l = 10; l > 0; l--)
            {
                if (Kambing[i].nama[l] > Kambing[j].nama[l])
                {
                    //Agar program dapat berhenti
                    break;
                }
                else if (Kambing[i].nama[l] < Kambing[j].nama[l])
                {
                    temp = Kambing[i];
                    Kambing[i] = Kambing[j];
                    Kambing[j] = temp;
                    break;
                }
            }
        }
    }
}

//Prosedur atau Fungsi untuk menampilkan menu "Pengurutan atau Sorting" pada "Nama Sapi" secara "Descending"
void Bubble_Sort_DSC_Nama_Sapi()
{
    int x, i, k;
    k = 1;
    char jumlah[5];
    cout<<"Masukkan Jumlah Data yang ingin diurut : ";
    cin>>jumlah;
    cout<<"=========================================================================="<<endl;

    x = atoi (jumlah);
    Urut_Bubble_Sort_ASC_Nama_Sapi(x, Sapi);

    for (i = x; i > 0-1; i--)
    {
        cout<<"Sapi Nomor "<<k<<endl;
        k++;
        cout<<"Nama     : "<<Sapi[i].nama<<endl;
        cout<<"Umur     : "<<Sapi[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Sapi[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Sapi[i].harga<<endl;
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
    Sapi[0] = Sapi [0 + 1];fflush(stdin);
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan menu "Pengurutan atau Sorting" pada "Kambing" secara "Descending"
void Bubble_Sort_DSC_Nama_Kambing()
{
    //Pendeklarasian
    int x, i, k; // Untuk Perulangan
    k = 1; // Untuk Perulangan
    char jumlah[5];
    cout<<"Masukkan Jumlah Data yang ingin diurut : ";
    cin>>jumlah;
    cout<<"=========================================================================="<<endl;

    //atoi digunakan untuk mengubah tipe data string dengan penulisan char menjadi integer
    x = atoi (jumlah);

    //Pemanggilan Fungsi atau Prosedur void Urut_Bubble_Sort_ASC_Nama_Kambing
    Urut_Bubble_Sort_ASC_Nama_Kambing(x, Kambing);

    //Perulangan For
    for (i = x; i > 0-1; i--)
    {
        cout<<"Kambing Nomor "<<k<<endl;
        k++;
        cout<<"Nama     : "<<Kambing[i].nama<<endl;
        cout<<"Umur     : "<<Kambing[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Kambing[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Kambing[i].harga<<endl;
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
    Kambing[0] = Kambing [0 + 1];fflush(stdin);
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu mengenai cara pengurutan
void cara_sort()
{
    cout<<"Silahkan Pilih Cara Pengurutan Data"<<endl;
    cout<<"[A] Ascending (Kecil ke Besar)"<<endl;
    cout<<"[B] Descending (Besar ke Kecil)"<<endl;
    cout<<"\nMasukkan dengan Huruf Kapital !"<<endl;
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu mengenai objek pengurutan
void objek_sort()
{
    cout<<"Silahkan Pilih Objek Pengurutan Data"<<endl;
    cout<<"[A] Nama"<<endl;
    cout<<"[B] Umur"<<endl;
    cout<<"\nMasukkan dengan Huruf Kapital !"<<endl;
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu mengenai pengurutan secara keseluruhan
void sort()
{
    //Pendeklarasian
    string pilih, cara, objek;

    cout<<"Silahkan Pilih Hewan yang ingin diurutkan datanya"<<endl;
    pilih_hewan();
    cout<<"Masukkan Pilihan Hewan [A / B] : ";
    cin>>pilih;
    cout<<"=========================================================================="<<endl;
    objek_sort();
    cout<<"Masukkan Pilihan Objek Pengurutan [A / B] : ";
    cin>>objek;
    cout<<"=========================================================================="<<endl;
    cara_sort();
    cout<<"Masukkan Pilihan Cara [A / B] : ";
    cin>>cara;
    cout<<"=========================================================================="<<endl;

    //Percabangan if else untuk mengelompokkan pilihan yang telah diinputkan oleh user
    if (pilih == "A")
    {
        if (objek == "A")
        {
            if (cara == "A")
            {
                //Pemanggilan Fungsi atau Prosedur void Bubble_Sort_ASC_Nama_Sapi
                Bubble_Sort_ASC_Nama_Sapi();
            }
            else if (cara == "B")
            {
                //Pemanggilan Fungsi atau Prosedur void Bubble_Sort_DSC_Nama_Sapi
                Bubble_Sort_DSC_Nama_Sapi();
            }
            else
            {
                cout<<"Mohon Maaf Cara yang Anda Pilih Tidak Tersedia"<<endl;
            }
        }
        else if (objek == "B")
        {
            if (cara == "A")
            {
                //Pemanggilan Fungsi atau Prosedur void Bubble_Sort_ASC_Umur_Sapi
                Bubble_Sort_ASC_Umur_Sapi();
            }
            else if (cara == "B")
            {
                //Pemanggilan Fungsi atau Prosedur void Bubble_Sort_DSC_Umur_Sapi
                Bubble_Sort_DSC_Umur_Sapi();
            }
            else
            {
                cout<<"Mohon Maaf Cara yang Anda Pilih Tidak Tersedia"<<endl;
            }
        }
        else
        {
            cout<<"Mohon Maaf Objek yang Anda Pilih Tidak Tersedia"<<endl;
        }
    }
    else if (pilih == "B")
    {
        if (objek == "A")
        {
            if (cara == "A")
            {
                //Pemanggilan Fungsi atau Prosedur void Bubble_Sort_ASC_Nama_Kambing
                Bubble_Sort_ASC_Nama_Kambing();
            }
            else if (cara == "B")
            {
                //Pemanggilan Fungsi atau Prosedur void Bubble_Sort_DSC_Nama_Kambing
                Bubble_Sort_DSC_Nama_Kambing();
            }
            else
            {
                cout<<"Mohon Maaf Cara yang Anda Pilih Tidak Tersedia"<<endl;
            }
        }
        else if (objek == "B")
        {
            if (cara == "A")
            {
                //Pemanggilan Fungsi atau Prosedur void Bubble_Sort_ASC_Umur_Kambing
                Bubble_Sort_ASC_Umur_Kambing();
            }
            else if (cara == "B")
            {
                //Pemanggilan Fungsi atau Prosedur void Bubble_Sort_DSC_Umur_Kambing
                Bubble_Sort_DSC_Umur_Kambing();
            }
            else 
            {
                cout<<"Mohon Maaf Cara yang Anda Pilih Tidak Tersedia"<<endl;
            }
        }
        else
        {
            cout<<"Mohon Maaf Objek Pengurutan yang Anda Pilih Tidak Tersedia"<<endl;
        }
    }
    else
    {
        cout<<"Mohon Maaf Data Hewan yang Anda Pilih Tidak Tersedia"<<endl;
    }
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

int main()
{
    //Pendeklarasian
    //jawab = Jawaban user terkait pilihan menu yang ingin dijalankan
    int jawab;

    //Pemanggilan Fungsi atau Prosedur void intro
    intro();

    //Pemanggilan Fungsi atau Prosedur void isi_data_sapi
    isi_data_sapi();

    //Pemanggilan Fungsi atau Prosedur void isi_data_kambing
    isi_data_kambing();

    //Label yang digunakan sebagai tempat pengulangan menu ketika dipanggil dengan
    //menggunakan perintah goto
    kembali:

    //Pemanggilan Fungsi atau Prosedur void pilih_menu
    pilih_menu();
    cout<<"\nMasukkan Pilihan Menu [1, 2, 3, 4, 5 atau 6] : ";
    cin>>jawab;
    cout<<"=========================================================================="<<endl;
    if (jawab == 1)
    {
        //Pemanggilan Fungsi atau Prosedur void tampil_data
        tampil_data(); 

        //Perintah untuk melompat ke label "kembali" yang telah dideklarasikan di awal
        goto kembali;
    }
    else if (jawab == 2)
    {
        //Pemanggilan Fungsi atau Prosedur void tambah_data
        tambah_data();
        goto kembali;
    }
    else if (jawab == 3)
    {
        //Pemanggilan Fungsi atau Prosedur void edit_data
        edit_data();
        goto kembali;
    }
    else if (jawab == 4)
    {
        //Pemanggilan Fungsi atau Prosedur void hapus_data
        hapus_data();
        goto kembali;
    }
    else if (jawab == 5)
    {
        //Pemanggilan Fungsi atau Prosedur void sort
        sort();
        goto kembali;
    }
    else if (jawab == 6)
    {
        cout<<"                               Terima Kasih                               "<<endl;
        cout<<"==========================================================================";
        
        //Perintah untuk keluar dari program
        exit(0);
    }
    else 
    {
        cout<<"Mohon Maaf Pilihan Menu Tidak Tersedia"<<endl;
        cout<<"=========================================================================="<<endl;
        goto kembali;
    }
    cout<<"=========================================================================="<<endl;
}