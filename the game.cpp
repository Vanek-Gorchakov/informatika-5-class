#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h> 


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string imya;
	std::string rep;
	int nomer;
	std::cout << "Перед началом игры введите свое имя: ";
	std::cin >> imya;

	std::cout << "\nДисклеймер: данная история выдуманна. Все совпадения с реальными людьми и "
		"событиями случайны.\n\n";
	system("pause");
	while (true) {
		std::cout << imya << " - ты обычный студент 2 курса квантов. Как и большинству твоих однокурсников, "
			"тебе не повезло попасть \nна семинарские занятияк преподавателю А.М. Мурицыной. Завтра последняя возможность "
			"\nсдать ей первое задание по анальной механике. На часах уже 3 ночи, " << imya << ", что ты собираешься делать?\n";
		std::cout << "1)Начать ботать\n2)Лечь полифазно полчасика поспать\n3)Записать реп" << std::endl;
		std::cin >> nomer;
		if (nomer == 2)
		{
			std::cout << "\nВы попали в ловушку джокушкера, если вам меньше 18 лет, срочно закройте игру!\n";
			system("pause");
			std::cout << "\nВЫ просыпаетесь не в своей кровати, к вам подбегает Ахмэд и кричит: 'добро пожаловать в Сочи, друг мой'" << "\n" << imya << ": Как я сюда попал?\n"
				"Ахмэд: Не важно, смотри что есть!"
				"\nОн подает тебе три бутылки водки"
				"\nКакую выберешь?"
				"\n1)Русский стандарт"
				"\n2)Беленькая люкс\n";
			std::cin >> nomer;
			if (nomer == 2) {
				std::cout << "Водка оказалась паленой, через пару часов страданий, вы умерли. \nКто вообще выбирает беленькую люкс, когда есть русский стандарт??";
				break;
			}
			else if (nomer == 1) {
				std::cout << "Ты все еще не понимаешь что происходит, но уже в веселом настроении вы едете на машине скорой помощи в клуб"
					"\nВы тусуетесь, все хорошо, весело, вкусно, но в какой-то момент ты видишь, \nкак Ахмэд уходит из клуба в сопровождении двух очаровательных дам"
					"\nВ попытках догнать его, ты натыкаешься на человека в черных очках и плаще\n\n";
				system("pause");
				std::cout << "\nНезнакомец: " << imya << ", привет, ядолго искал тебя, я знаю, как тебе помочь\n" << imya << ":Объясни пожалуйста, что происходит\n"
					"Незнакомец смотри, есть две таблетки - синяя и красная. \nЕсли съешь синюю, откатишься назад во времени и сможешь изменить свое будущее,\nесли съешь красную, станешь самым богатым человеком на планете\n"
					"Какую выберешь?\n"
					"1)Синяя\n"
					"2)Красная\n";
				std::cin >> nomer;
				if (nomer == 2) {
					std::cout << "Это оказалась обычная барбариска, последнее, что вы заметили - это то, как человек в очках пронзил вас катаной"
						"\nВидимо он был японцем, подумали вы и умерли";
					break;
				}
				else if (nomer == 1) {

					continue;
				}

			}

		}
		else if (nomer == 3) {
			std::cout << "Ты нашел бесплатный бит, полночи сидел над текстом, записал на диктофон, попытался свести,\nно все равно получилось не очень. Что же теперь делать?\n"
				"1)Понять, что не твое и пойти спать\n"
				"2)Продолжать работать и всех, кто не верит в тебя, называть атеистами\n";
			std::cin >> nomer;
			if (nomer == 1) {
				std::cout << "Вы проспали сдачу дз, забили на анальную механику, не сдали экзамен, пересдачу, комиссию"
					"\nВас отчислили, ту ту туру туру туууу\nЗдравствуй небо в сапогах\nЗдравствую юность в облаках\nПропади моя тоска\nВот он я, привет воскааа...\nДля печали нет причин)))";
				break;
			}
			else if (nomer == 2) {
				std::cout << "Ты работаешь сутками напролет, улучшаешь качество звука, технику, подачу\nОтпраляешь лучший материал на прослушивание в Сонимьюзик\nИм понравилось, они пригласили тебя на собеседование"
					"\nприходишь в их офис, там тебе дают задание продолжить строчку:\nУтро начинается не с кофе, а с сигареты...\nКак ты это продолжишь?\n";
				std::cin.ignore();
				std::getline(std::cin, rep);
				if (rep == "И потому что мы всю ночь взрывали ракеты") {
					std::cout << "\nСонимьюзик: Это лучшее, что мы слышали, мы сделаем вас популярным\n\n";
					system("pause");
					std::cout << "\nСпустя год плодотворной работы, вы обошли по популярности Моргенштерна\nУ вас куча деняк, но вы все так же продолжаете бегать от армии, потому что не догадались купить военник";
					break;

				}
				else {
					std::cout << "\nСонимьюзик: Это худшее, что мы слышали, у вас нет таланта\nНу а дальше известная схема:\nту ту туру туру туууу\nЗдравствуй небо в сапогах\nЗдравствую юность в облаках\nПропади моя тоска\nВот он я, привет воскааа...\nДля печали нет причин)))";
					break;

				}
			}
		}
		else if (nomer == 1) {
			std::cout << "У вас есть две стратегии:\n"
				"1)Скатать дз\n"
				"2)Не спать всю ночь и разобраться самому\n";
			std::cin >> nomer;
			if (nomer == 1) {
				std::cout << "\nПоздравляем! Ничего не ботая, вы написали к/р и получили половину баллов!\n"
					"Что будешь делать дальше?"
					"\n1)Пойти отмечать с друзьями"
					"\n2)Готовиться к сдаче другого предмета\n";
				std::cin >> nomer;
				if (nomer == 1) {
					std::cout << "\nВаше психологическое состояние улучшилось, теперь вы можете ботать дальше\n";
					system("pause");
					std::cout << "\nПоздравляем! Теперь вы физтех!\n";
					break;
				}
				else if (nomer == 2) {
					std::cout << "\nВы много ботали и устали, теперь придется отдохнуть\n"
						"1)Отдохнуть\n"
						"2)Ботать сквозь пот и слезы\n";
					std::cin >> nomer;
					if (nomer == 1) {
						std::cout << "\nВас отчислили. Game over";
						break;
					}
					else if (nomer == 2) {
						std::cout << "\nПоздравляем! Теперь вы физтех!";
						break;
					}

				}

			}
			else if (nomer == 2) {
				std::cout << "\nУтром вы проспали 15 минут от пары. Все равно хотите пойти на сдачу?\n"
					"1)Да\n"
					"2)Видно, не судьба\n";
				std::cin >> nomer;
				if (nomer == 1) {
					std::cout << "\nПоздравляем! Вам простили опоздание, и вы написали к/р на фулл!\nТеперь вы физтех!";
					break;
				}
				else if (nomer == 2) {
					std::cout << "\nВам назначили дополнительный день сдачи. Пойдете на него?\n"
						"1)Да\n"
						"2)Нет \n";
					std::cin >> nomer;
					if (nomer == 1) {
						std::cout << "\nВы сдали!\nПоздравляем! Теперь вы физтех!";
						break;
					}
					else if (nomer == 2) {
						std::cout << "\nВы пошли отдыхать с друзьями, вас заметил препод на НК\nи поставил ноль и за д/з, и за к/р"
							"\nПоздравляем! Теперь вы физтех!";
						break;


				

					}
				}
			}
		}
	}
}
