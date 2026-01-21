#include <iostream>
#include <string>
using namespace std;

//Структура типов данных
struct videoShop{
    string name_film; //Название фильма
    string director;  //Режиссер
    string genre;     //Жанр
    float rating;       //Рейтинг
    int price_disk;          //Цена диска
};

//Функция для поиска фильма по названию
void FindToFilmName(const videoShop film[], int size, const string &name_film){
    //Цикл: проходимся столько раз, сколько фильмов есть в массиве
    for(int i = 0; i < size; i++){
        //Условие: если фильм найден, выводим его
        if(film[i].name_film == name_film){
            cout << "Фильм найден: " << film[i].name_film << endl;
            cout << endl;
            return; 
        }
    }
    //Иначе выводим что ничего не нашли
    cout << "Фильм не найден!";
    cout << endl;
}

//Функция для поиска фильма по жанру
void FindToFilmGenre(const videoShop film[], int size, const string &genre){
    //Цикл: проходимся столько раз, сколько фильмов в массиве
    for(int i = 0; i < size; i++){
        //Условие: если есть жанр, то выводим сообщение об успешной операции
        if(film[i].genre == genre){
            cout << "Фильм с жанром " << film[i].genre << " Найден!" << endl;
            cout << "Фильм: " << film[i].name_film << endl;
            cout << endl;
            return;
        }
    }
    //Иначе выводим о неуспешной операции
    cout << "Фильм не найден по введенному жанру!";
    cout << endl;
}

//Функция для поиска фильма по режиссеру
void FindToFilmDirector(const videoShop film[], int size, const string &director){
    //Цикл: проходимся столько раз, сколько фильмов в массиве
    for(int i = 0; i < size; i++){
        //Условие: если найден фильм по режиссеру, то выводим фильм
        if(film[i].director == director){
            cout << "Фильм по режиссеру " << film[i].director << " найден!" << endl;
            cout << "Фильм: " << film[i].name_film << endl; 
            cout << endl;
            return;
        }
    }
    //Иначе сообщаем что не нашли
    cout << "Фильм по режиссеру не найден!" << endl;
    cout << endl;
}

//Функция для поиска самого популярного фильма в жанре
void FindToFilmPopularGenre(const videoShop film[], int size, const string &genre){
    //Начальный максимальный рейтинг
    float max_rating = -1;
    //Переменная, чтобы передать название фильма для вывода
    int index = -1;
    //Цикл: проходимся по нему столько раз, сколько всего фильмов в массиве
    for(int i = 0; i < size; i++){
        //Условие: если фильм по жанру найден и он больше макс.рейтинга, то меняем значение макс.рейтинга
        if(film[i].genre == genre && film[i].rating > max_rating){
            max_rating = film[i].rating;
            index = i; 
        }
    }
    cout << "Фильм с максимальным рейтингом: " << max_rating << endl;
    cout << "Фильм: " << film[index].name_film << endl;
    cout << "Жанр: " << film[index].genre << endl;
    cout << endl;
    return;
}

//Функция для вывода информации о всех фильмах
void ShowInfo(const videoShop film[], int size){
    //Цикл: выводим информацию о фильмах столько, сколько фильмов в массиве
    for(int i = 0; i < size; i++){
        cout << "Название: " << film[i].name_film << endl;
        cout << "Режиссер: " << film[i].director << endl;
        cout << "Жанр: " << film[i].genre << endl;
        cout << "Рейтинг: " << film[i].rating << endl;
        cout << "Цена диска: " << film[i].price_disk << endl;
        cout << endl;
        return;
    }
}

//Функция для добавления нового фильма в массив
void GetFilm(videoShop film[], int &size){
    cout << "Название: ";
    getline(cin, film[size].name_film);
    cout << "Режиссер: ";
    getline(cin, film[size].director);
    cout << "Жанр: ";
    getline(cin, film[size].genre);
    cout << "Рейтинг: ";
    cin >> film[size].rating;
    cout << "Цена диска: ";
    cin >> film[size].price_disk;
    cin.ignore();
    size ++;
    return;
}

int main(){
    setlocale(LC_ALL, "ru");

    //Объект с VideoShop c инициализацией
    videoShop film = {"Формула 1", "Стивен Миррион", "Спорт", 8.2, 1000};
    //Количество заполненных фильмов в массив
    int size = 1;

    //Новый массив с 100 фильмами
    videoShop film_1[100];
    //Объект с VideoShop c инициализацией
    film_1[0] = {"Формула 1", "Стивен Миррион", "Спорт", 8.2, 1000};
    //Количество заполненных фильмов в массив
    int size_1 = 1;

    //Вызов функции для поиска фильма
    FindToFilmName(&film, 1, "Формула 1");
    //Вызов функции для поиска фильма по жанру
    FindToFilmGenre(&film, 1, "Спорт");
    //Вызов функции для поиска фильма по режиссеру
    FindToFilmDirector(&film, 1, "Стивен Миррион");
    //Вызов функции для поиска самого популярного фильма по жанру
    FindToFilmPopularGenre(&film, 1, "Спорт");
    //Вызов функции для показа информации о фильмах
    ShowInfo(&film, 1);
    //Вызов функции для добавления нового фильма в массив
    GetFilm(film_1, size_1);
    
    return 0;
}