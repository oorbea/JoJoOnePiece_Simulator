#include "powers.hh"

const vector<Fruit> fruitArray = {
    Fruit("Sin fruta", "Desafortunadamente no tienes fruta del diablo", "ninguno"),
    Fruit("Gomu Gomu", "Convierte al consumidor en un hombre de goma, lo que le permite estirarse aparentemente sin límite. También es inmune a las balas, caídas y golpes, aunque puede ser golpeado muy fuerte.", "Zoan"),
    Fruit("Bara Bara", "Poder separar su cuerpo a voluntad y volar sus partes separadas (menos sus pies) hasta cierta área alrededor de los pies. Y es inmune a los cortes.", "Paramecia"),
    Fruit("Sube Sube", "Vuelve la piel del consumidor resbaladiza usando la grasa de la persona, lo que vuelve al consumidor esbelto y no le afectan los ataques ya que estos resbalan.", "Paramecia"),
    Fruit("Kilo Kilo", "Controlar su peso a voluntad desde 1 a 10.000 kilos.", "Paramecia"),
    Fruit("Bomu Bomu", "Explotar cualquier parte de su cuerpo, incluso su propio aliento. También lo hace inmune a las explosiones y al fuego.", "Paramecia"),
    Fruit("Hana Hana", "Hacer florecer cualquier parte de su cuerpo en cualquier superficie.", "Paramecia"),
    Fruit("Doru Doru", "Generar y manipular grandes cantidades de cera, las cuales puede hacerlas líquidas o sólidas como el hierro.", "Paramecia"),
    Fruit("Baku Baku", "Comer de todo literalmente, y fusionar objetos/personas y a sí mismo con cosas que haya comido.", "Paramecia"),
    Fruit("Mane Mane", "Transformarse físicamente en cualquier persona a la que le haya tocado la cara.", "Paramecia"),
    Fruit("Toge Toge", "Hacer crecer pinchos en su cuerpo.", "Paramecia"),
    Fruit("Supa Supa", "Convertir cualquier parte de su cuerpo en hojas de cuchillas haciéndolo tan duro como el metal.", "Paramecia"),
    Fruit("Ori Ori", "Crear grilletes en otra persona, así como jaulas y cualquier tipo de restricciones.", "Paramecia"),
    Fruit("Bane Bane", "Generar muelles en cualquier parte de su cuerpo.", "Paramecia"),
    Fruit("Ito Ito", "Generar hilos con los que puede cortar a su objetivo o manejar a las personas como si fueran marionetas.", "Paramecia"),
    Fruit("Noro Noro", "Lanzar rayo especial que vuelve muy lento a su objetivo por treinta segundos.", "Paramecia"),
    Fruit("Doa Doa", "Se convierte en un hombre-puerta, con lo cual puede crear puertas en cualquier lugar, incluso en el propio aire, o en una persona.", "Paramecia"),
    Fruit("Awa Awa", "Crear jabón a través de su cuerpo y manipularlo, además puede lavar la fuerza de una persona.", "Paramecia"),
    Fruit("Beri Beri", "Separar cualquier parte de su cuerpo en esferas.", "Paramecia"),
    Fruit("Sabi Sabi", "Oxidar instantáneamente cualquier cosa.", "Paramecia"),
    Fruit("Shari Shari", "Crear ruedas que usa como arma en cualquier parte de su cuerpo.", "Paramecia"),
    Fruit("Yomi Yomi", "Da al consumidor una segunda vida, su alma puede separarse de su cuerpo y unir algún miembro que haya sido separado del cuerpo.", "Paramecia"),
    Fruit("Kage Kage", "Controlar las sombras tanto propia como de otra persona de diversas formas.", "Paramecia"),
    Fruit("Horo Horo", "Crear y manipular fantasmas que vuelven negativa a la gente o fantasmas explosivos, también puede separar su alma de su cuerpo en una proyección astral.", "Paramecia"),
    Fruit("Suke Suke", "Volverse invisible y volver invisible a cualquier objeto o persona.", "Paramecia"),
    Fruit("Nikyu Nikyu", "Repeler cualquier cosa, objetos, cosas intangibles, el propio dolor, ataques y repelerse a sí mismo o a otras personas para viajar a gran velocidad.", "Paramecia"),
    Fruit("Ope Ope", "Crea un área de color azul claro, donde puede manipular cualquier cosa que este dentro del área, y cortar a las personas sin que necesariamente sean dañadas.", "Paramecia"),
    Fruit("Shiro Shiro", "Convertirse en un castillo humano, pudiendo alojar en su interior incluso a personas.", "Paramecia"),
    Fruit("Wara Wara", "Generar y manipular una paja con la propiedad de redirigir el daño a voluntad.", "Paramecia"),
    Fruit("Mero Mero", "Convertir en piedra a cualquier persona que sienta atracción hacia el consumidor.", "Paramecia"),
    Fruit("Doku Doku", "Crear y manipular varios tipos de veneno, además de ser inmune al veneno. ", "Paramecia"),
    Fruit("Horu Horu", "Inyectar diferentes tipos de hormonas en su cuerpo o el de otra persona, puede inyectar hormonas de género, tensión, medicinal, facial.", "Paramecia"),
    Fruit("Choki Choki", "Convertir parte de su cuerpo en tijeras. Cualquier cosa que corte gana las propiedades del papel, hasta que termine de cortarlo.", "Paramecia"),
    Fruit("Gura Gura", "Crear ondas de choque y crear terremotos, maremotos y tsunamis. También puede colocar ondas de choque en armas y es la paramecia más poderosa.", "Paramecia"),
    Fruit("Kira Kira", "Permite a su consumidor convertir su cuerpo parcial o totalmente en diamante.", "Paramecia"),
    Fruit("Poke Poke", "Guardar objetos en bolsillos creados en su cuerpo.", "Paramecia"),
    Fruit("Woshu Woshu", "Lavar y secar el mal de las personas, igual que una ropa en un tendedero.", "Paramecia"),
    Fruit("Fuwa Fuwa", "Volar y hacer levitar cosas no vivas.", "Paramecia"),
    Fruit("Mato Mato", "Lanzar cualquier objeto o ser vivo a cualquier persona que haya tocado con una de sus dos manos, y son lanzados hacia donde esta la persona sin perderse, sin importar la distancia. Sólo puede tener un máximo de dos objetivos al mismo tiempo.", "Paramecia"),
    Fruit("Fuku Fuku", "Producir ropa y otros accesorios a partir de una hoja o una piedra.", "Paramecia"),
    Fruit("Buki Buki", "Convertir su cuerpo total o parcialmente en cualquier tipo de arma.", "Paramecia"),
    Fruit("Guru Guru", "Rotar partes de su cuerpo a gran velocidad.", "Paramecia"),
    Fruit("Zushi Zushi", "Controlar y emitir grandes cantidades de fuerza gravitatoria.", "Paramecia"),
    Fruit("Beta Beta", "Crear una sustancia pegajosa e inflamable.", "Paramecia"),
    Fruit("Bari Bari", "Crear barreras de protección alrededor de su cuerpo.", "Paramecia"),
    Fruit("Nui Nui", "Coser cualquier cosa.", "Paramecia"),
    Fruit("Giro Giro", "Ver a través de las personas, lo que permite conocer sus pensamientos y recuerdos. ", "Paramecia"),
    Fruit("Ato Ato", "Convertirse en un hombre-arte, en este caso mujer-arte, que puede transformar cualquier cosa en arte.", "Paramecia"),
    Fruit("Jake Jake", "Convertirse en un hombre-chaqueta, y así colocarse encima de personas, animales y monstruos, y utilizar su cuerpo como quiera.", "Paramecia"),
    Fruit("Hobi Hobi", "Transformar en un juguete a quien toque, además hace que el aspecto del consumidor no cambie, así que tiene la apariencia que tenía al comerla.", "Paramecia"),
    Fruit("Sui Sui", "Zambullirse y nadar a través del suelo y las paredes.", "Paramecia"),
    Fruit("Ton Ton", "Manipular en toneladas su masa corporal.", "Paramecia"),
    Fruit("Hira Hira", "Manipular cualquier material como si fuera una tela, aunque el material conservará sus propiedades como la dureza.", "Paramecia"),
    Fruit("Ishi Ishi", "Absorberse, fundirse y manipular las rocas.", "Paramecia"),
    Fruit("Pamu Pamu", "Hinchar cualquier parte no orgánica de su cuerpo o cualquier cosa no orgánica que toque hasta reventar.", "Paramecia"),
    Fruit("Nagi Nagi", "Silenciar cualquier sonido.", "Paramecia"),
    Fruit("Chiyu Chiyu", "Las lágrimas del consumidor son curativas.", "Paramecia"),
    Fruit("Maki Maki", "Controlar los pergaminos.", "Paramecia"),
    Fruit("Soru Soru", "Tomar el alma de las personas para dar vida a cualquier objeto inanimado.", "Paramecia"),
    Fruit("Pero Pero", "Convertir en caramelo cualquier cosa.", "Paramecia"),
    Fruit("Mira Mira", "Reflejar los ataques del enemigo como un espejo.", "Paramecia"),
    Fruit("Bisu Bisu", "Generar y manipular las galletas a voluntad.", "Paramecia"),
    Fruit("Buku Buku", "Manipular los libros a su antojo.", "Paramecia"),
    Fruit("Kuri Kuri", "Producir y manipular la crema.", "Paramecia"),
    Fruit("Bata Bata", "Crear y controlar mantequilla.", "Paramecia"),
    Fruit("Shibo Shibo", "Exprimir los líquidos en una persona u objeto para deshidratarlo.", "Paramecia"),
    Fruit("Memo Memo", "Manipular los recuerdos de otra persona como si fueran una película.", "Paramecia"),
    Fruit("Mochi Mochi ", "Manipular un mochi que se trata de pastel japonés muy popular.", "Paramecia"),
    Fruit("Hoya Hoya", "Convocar a un genio desde su propio cuerpo. ", "Paramecia"),
    Fruit("Netsu Netsu", "Emitir grandes cantidades de calor. ", "Paramecia"),
    Fruit("Kuku Kuku", "Transformar cualquier material en comida.", "Paramecia"),
    Fruit("Gocha Gocha", "Fusionarse con más de una persona.", "Paramecia"),
    Fruit("Oshi Oshi", "Mover o manipular el suelo como si fuera arcilla.", "Paramecia"),
    Fruit("Kobu Kobu", "Cuando su consumidor ondee una bandera, el resto se cargan de valor y luchan a su lado.", "Paramecia"),
    Fruit("Toki Toki", "Viajar en el tiempo hacia el futuro y enviar a otros en la misma dirección temporal.", "Paramecia"),
    Fruit("Juku Juku", "Madurar y pudrir objetos inanimados.", "Paramecia"),
    Fruit("Dero Dero", "Disolverse a uno mismo en líquido.", "Paramecia"),
    Fruit("Hebi Hebi (modelo Anaconda)", "Convertirse en una anaconda y un hombre o mujer-anaconda.", "Zoan"),
    Fruit("Hebi Hebi (modelo Cobra real)", "Transformarse en una cobra y un hombre o mujer-cobra, además de escupir veneno mortal.", "Zoan"),
    Fruit("Hebi Hebi (modelo Yamata no Orochi)", "Transformarse total o parcialmente en un yamata no orochi, un monstruo de la mitología japonesa parecido a una hidra.", "Zoan Mitológica"),
    Fruit("Hito Hito", "Convertirse en humano, también le da al animal que se la coma inteligencia humana.", "Zoan"),
    Fruit("Hito Hito (modelo Daibutsu)", "Transformarse total o parcialmente en un Buda gigante.", "Zoan Mitológica"),
    Fruit("Inu Inu (modelo chacal)", "Transformarse en un chacal y en un hombre-chacal.", "Zoan"),
    Fruit("Inu Inu (modelo dálmata)", "Transformarse en un perro dálmata o en un hombre-perro.", "Zoan"),
    Fruit("Inu Inu (modelo lobo)", "Transformarse en un Lobo y en un hombre-lobo.", "Zoan"),
    Fruit("Inu Inu (modelo dachsbund)", "Transformarse en un perro salchicha a voluntad.", "Zoan"),
    Fruit("Inu Inu (modelo kyubi)", "Transformarse total y parcialmente en un zorro de nueve colas y convertirse en clones perfectos de otras personas.", "Zoan Mitológica"),
    Fruit("Inu Inu (modelo bake-danuki)", "Transformarse total o parcialmente en un tanuki.", "Zoan"),
    Fruit("Kame Kame", "Convertirse en una tortuga o en un hombre-tortuga, capaz de protegerse con un caparazón tan duro como el diamante.", "Zoan"),
    Fruit("Kumo Kumo", "Convertirse en una araña o en un híbrido hombre-araña.", "Zoan"),
    Fruit("Kumo Kumo (modelo rosamygale grauvogeli)", "Transformarse total o parcialmente en una araña rosamygale grauvogeli.", "Zoan Prehistórica"),
    Fruit("Mogu Mogu", "Convertirse en topo y en un hombre o mujer-topo, capaz de cavar túneles en el suelo.", "Zoan"),
    Fruit("Mushi Mushi (modelo Suzumebachi)", "Convertirse parcial o totalmente en un avispa y tener control sobre esta especie.", "Zoan"),
    Fruit("Mushi Mushi (modelo Kabutomushi)", "Convertirse parcial o totalmente en un escarabajo rinoceronte.", "Zoan"),
    Fruit("Neko Neko (modelo leopardo)", "Transformarse en un leopardo y en un hombre-leopardo.", "Zoan"),
    Fruit("Neko Neko (modelo dientes de sable)", "Transformarse total o parcialmente en un dientes de sable, así que es una Zoan Prehistórica.", "Zoan"),
    Fruit("Sara Sara (modelo axolote)", "Convertirse en un axolote o salamandra que puede escupir veneno.", "Zoan"),
    Fruit("Tori Tori (modelo halcón)", "Transformarse en un hombre-halcón.", "Zoan"),
    Fruit("Tori Tori (modelo fénix)", "Transformarse en un fénix.", "Zoan Mitológica"),
    Fruit("Tori Tori (modelo albatros)", "Transformarse en un albatros.", "Zoan"),
    Fruit("Uma Uma", "Convertirse en caballo", "Zoan"),
    Fruit("Ushi Ushi (modelo bisonte)", "Convertirse en un bisonte y en un hombre-bisonte.", "Zoan"),
    Fruit("Ushi Ushi (modelo jirafa)", "Transformarse en una jirafa y en un hombre-jirafa.", "Zoan"),
    Fruit("Zou Zou", "Transformarse en elefante.", "Zoan"),
    Fruit("Zou Zou (modelo mamut)", "Transformarse en un mamut.", "Zoan Prehistórica"),
    Fruit("Ryu Ryu (modelo allosaurus)", "Transformarse total o parcialmente en un allosaurus.", "Zoan Prehistórica"),
    Fruit("Ryu Ryu: (modelo spinosaurus)", "Transformarse total o parcialmente en un spinosaurus.", "Zoan Prehistórica"),
    Fruit("Ryu Ryu: (modelo pteranodon)", "Transformarse total o parcialmente en un pteranodon.", "Zoan Prehistórica"),
    Fruit("Ryu Ryu: (modelo brachiosaurus)", "Transformarse total o parcialmente en un brachiosaurus.", "Zoan Prehistórica"),
    Fruit("Ryu Ryu: (modelo pachycephalosaurus)", "Transformarse total o parcialmente en un pachycephalosaurus.", "Zoan Prehistórica"),
    Fruit("Ryu Ryu: (modelo triceratops)", "Transformarse total o parcialmente en un triceratops.", "Zoan Prehistórica"),
    Fruit("Uo Uo (modelo Seiryu)", "Transformarse en un dragón oriental.", "Zoan Mitológica"),
    Fruit("Moku Moku", "Elemento del humo.", "Logia"),
    Fruit("Mera Mera", "Elemento del fuego.", "Logia"),
    Fruit("Suna Suna", "Elemento de la arena.", "Logia"),
    Fruit("Goro Goro", "Elemento del rayo.", "Logia"),
    Fruit("Hie Hie", "Elemento del hielo.", "Logia"),
    Fruit("Yami Yami", "Elemento de la oscuridad.", "Logia"),
    Fruit("Pika Pika", "Elemento del luz.", "Logia"),
    Fruit("Magu Magu", "Elemento del magma.", "Logia"),
    Fruit("Numa Numa", "Elemento del pantano.", "Logia"),
    Fruit("Gasu Gasu", "Elemento del gas.", "Logia"),
    Fruit("Yuki Yuki", "Elemento de la nieve.", "Logia")

};

const vector<Stand> standArray = {
    
    Stand("Sin stand", "Desafortunadamente no tienes stand"),

    //Parte 3
    Stand("Star Platinum", "Es uno de los Stands más poderosos de la serie. Su abrumadora destreza física en cada característica básica, salvo el alcance, junto con la habilidad de Jotaro en combate, permite que Jotaro prevalezca repetidamente contra muchos usuarios de Stand incluso sin el uso de ninguna habilidad especial. Además, el descubrimiento de Jotaro de su capacidad para detener el tiempo solo lo hizo aún más formidable en el combate.", true),

    //Parte 6
    Stand("Stone Free", "A corta distancia y cuando está ensamblado, Stone Free tiene buena fuerza física pudiendo doblar una moneda, pero no es lo suficientemente fuerte como para doblar y romper los barrotes de una celda además de poder desviar las balas cuando sean disparadas en su contra gracias a su velocidad que es equivalente a la de un meteorito extremadamente pequeño y veloz. Además de esta cualidad, Stone Free también cuenta con habilidades integradas al cuerpo de Jolyne, permitiéndole deshacer su cuerpo en la forma de una cuerda extremadamente fina la cual ella puede usar de distintas maneras según la situación."),
    Stand("Kiss", "Kiss puede crear pegatinas cuadradas con símbolos de labios en ellas. Si una pegatina es colocada en un objeto, se creará una copia exacta de este. La pegatina permanecerá pegada ya sea en el objeto original o en la copia. El efecto incluye partes del cuerpo, de forma que si se coloca una pegatina en un brazo, se creará una copia como si fuera una extremidad adicional en el cuerpo del afectado. Ermes también puede colocarse pegatinas sobre sí misma."),
    Stand("Burning Down the House", "Burning Down the House no tiene ninguna manifestación física aparte de una habitación de aspecto normal con un piano, algunos libros, y una gran cantidad de espacio. No tiene personalidad ni puede atacar; sólo sirve como escondite de Emporio."),
    Stand("Foo Fighters", "Permite que los manojos de plancton existan en una forma humanoide. Adopta una personalidad propia. Puede recorrer cuerpos de agua con súper velocidad, producir cuerpos secundarios, desparar extensiones de sí misma, controlar el agua de forma limitada, controlar cuerpos de personas y también puede curar a la gente usando su plancton para coser microscópicamente las heridas rápidamente. Algunas de las heridas más mortales pueden curarse en cuestión de segundos."),
    Stand("Weather Report", "Weather Report es un stand versátil que posee un control casi completo sobre el clima a escala global. Teniendo control sobre los fenómenos meteorológicos, las habilidades de Weather Report también se extienden a la manipulación del agua, el viento, la electricidad, e incluso el frío, así como otros fenómenos elementales", true),
    Stand("Diver Down", "Diver Down puede imprimir cualquier golpe en cualquier superficie y liberar la energía acumulada cuando lo desee. Además, la habilidad principal de Diver Down es sumergirse dentro de objetos sólidos y luego manipular la materia que los compone. Con esta habilidad, Diver Down puede atacar a un enemigo o un objetivo desde su interior, por ejemplo, reorganizando sus huesos y tendones, o defender a un aliado ocultándose dentro de ellos y recibiendo el ataque en su lugar."),
    Stand("Whitesnake", "La habilidad principal de Whitesnake es transformar una parte o la totalidad de la psique de una persona o su [Stand] (espíritu) en Discos humanamente tangibles. Para ello, Whitesnake debe tocar a su víctima y físicamente extraer el disco de ellos. Estos discos se pueden insertar en otras personas, lo que les permite leer las memorias o utilizar Stands almacenados en el disco. Los discos son permanentes, existentes incluso mucho tiempo después de que Whitesnake deja de existir; la única manera de destruirlos es insertarlos en una persona moribunda, en cuyo caso el disco desaparece.", true),
    Stand("Goo Goo Dolls", "Goo Goo Dolls tiene la habilidad de reducir el tamaño de cualquier persona dentro de su rango. La víctima se reducirá al tamaño de un ratón y el Stand lo atacará si las órdenes de su usuario son desobedecidas."),
    Stand("Manhattan Transfer", "También llamado satélite asesino, Manhattan Transfer es un stand aproximadamente del tamaño de un pequeño pájaro que puede moverse libremente en el aire, es capaz de detectar y analizar el menor movimiento de aire. Si es atacado, intentará escapar del atacante. La habilidad principal de Manhattan Transfer es cambiar la dirección de las balas disparadas por su usuario, permitiendo que este alcance a sus objetivos sea cual sea su posición, haya obstáculos o dificultades en el viento."),
    Stand("Highway To Hell", "Cuando su usuario intenta suicidarse, también puede hacer que alguien muera de la misma manera que él. No importan las circunstancias, cualquier daño que su usuario enfrente terminará ocurriendo a la otra persona de la misma manera. En otras palabras, su usuario debe matarse para matar a su oponente."),
    Stand("Marilyn Manson", "Su habilidad se activa después de que su usuario hace una apuesta con alguien y gana (aunque él mismo puede engañar, la persona con la que apuesta no puede hacerlo), y cuando esa persona pierde, el Stand procede a tomar las ganancias registrando al perdedor, incluso llegando a tomar sus órganos para vender al mercado negro para pagar las deudas si no tiene suficiente dinero. La persona que perdió no puede resistirse o contraatacar mientras Marilyn Manson recolecta la deuda."),
    Stand("Jumpin' Jack Flash", "Si su usuario escupe sobre alguien, la persona dejará de ser afectada por la gravedad, moviéndose como si estuviera en gravedad cero. Este efecto se extiende también a cualquier cosa que la víctima toque, sea un objeto u otra persona. El rango del efecto tiene un radio de aproximadamente 20 metros desde el lugar o el cuerpo afectado."),
    Stand("Limp Bizkit", "Limp Bizkit permite que su usuario traiga a los muertos de vuelta a la vida como zombis invisibles. Estos se manifiestan como espíritus tangibles que salen de sus cuerpos corpóreos, presentando una enorme agresividad y atacando a cualquiera que se encuentre cerca. Además, estos zombis también poseen fuerza aumentada y la capacidad de caminar por las paredes"),
    Stand("Survivor", "Survivor viaja a través de superficies húmedas y estimula a la gente para pelear hasta la muerte. Además, durante el combate, las personas son habilitadas por Survivor para ver los puntos fuertes y puntos débiles de los demás."),
    Stand("Planet Waves", "Planet Waves atrae y asegura que los meteoritos del espacio exterior lleguen al cuerpo de su usuario, desintegrándose justo antes de entrar en contacto con él."),
    Stand("Dragon's Dream", "Tiene una brújula que utiliza los principios del feng shui para apuntar hacia la dirección de ambas áreas de suerte y mala suerte. Dragon's Dream es capaz de aprovecharse de esto permaneciendo en áreas afortunadas para evitar ataques, y atacando en las áreas desafortunadas de la otra persona para infligir el mayor daño posible. Cuando se dirigen golpes mortales, la gente es capaz de colocar sus extremidades en la burbuja de Dragon's Dream, haciendo que la extremidad se separe de la persona, dispararse velozmente contra el adversario para infligir el golpe, y luego regresando al atacante sin recibir ningún daño."),
    Stand("Yo-Yo Ma", "Yo-Yo Ma es capaz de producir una saliva peligrosamente ácida, teniendo múltiples maneras de atacar con ella. Además, este stand es semi-indestructible."),
    Stand("Green, Green Grass of Home", "La habilidad de Green, Green Grass of Home le permite encoger el tamaño de cualquier persona u objeto circundante cuanto más cerca se encuentre de su usuario."),
    Stand("Jall House Lock", "Jail House Lock tiene la Habilidad de hacer que las personas que toquen lo que esté custodiando el stand sean capaces de retener un límite de 3 elementos en su memoria a corto plazo. Si el objetivo de Jail House Lock aprende una cuarta cosa, olvidarán la primera cosa que aprendió. El objetivo puede aprender continuamente cosas nuevas a costa de olvidar el primer elemento. Sin embargo, los recuerdos a largo plazo alcanzados antes de la influencia de Jail House Lock permanecen."),
    Stand("Bohemian Rhapsody", "Bohemian Rhapsody es capaz de traer personajes representados en imágenes a la realidad a través de medios que contienen imágenes de esos personajes. Personajes de dibujos animados, manga y anime, incluso obras de arte y dibujos se ven afectados."),
    Stand("Sky High", "El único poder de Sky High es controlar y dirigir los misteriosos criptidos conocidos como rods, unos seres que se alimentan del calor corporal de las personas."),
    Stand("Under World", "Under World es capaz de excavar recuerdos de eventos y personas de la tierra. Esto incluye accidentes de automóvil, tiroteos, accidentes de avión que golpeó el suelo, juegos de fútbol de la NFL, minerales e incluso individuos."),

    //Parte 7
    Stand("Tusk", "", true),

};

map<string, vector<Stand>> evolutionMap;

void stablishEvolutions() {
    evolutionMap["Star Platinum"] = {
        Stand("Star Platinum", "Es uno de los Stands más poderosos de la serie. Su abrumadora destreza física en cada característica básica, salvo el alcance, junto con la habilidad de Jotaro en combate, permite que Jotaro prevalezca repetidamente contra muchos usuarios de Stand incluso sin el uso de ninguna habilidad especial."),
        Stand("Star Platinum: The World", "Es uno de los Stands más poderosos de la serie. Su abrumadora destreza física en cada característica básica, salvo el alcance, junto con la habilidad de Jotaro en combate, permite que Jotaro prevalezca repetidamente contra muchos usuarios de Stand incluso sin el uso de ninguna habilidad especial. Además, el descubrimiento de Jotaro de su capacidad para detener el tiempo solo lo hizo aún más formidable en el combate.")
    };
    evolutionMap["Silver Chariot"] = {
        Stand("Silver Chariot", ""),
        Stand("Chariot Requiem", "")
    };
    evolutionMap["Echoes"] = {
        Stand("Huevo", ""),
        Stand("Echoes ACTO 1", ""),
        Stand("Echoes ACTO 2", ""),
        Stand("Echoes ACTO 3", "")
    };
    evolutionMap["Killer Queen"] = {
        Stand("Killer Queen", ""),
        Stand("Killer Queen: Bites the Dust", "")
    };
    evolutionMap["Gold Experience"] = {
        Stand("Gold Experience", ""),
        Stand("Gold Experience Requiem", "")
    };
    evolutionMap["Weather Report"] = {
        Stand("Weather Report", ""),
        Stand("Heavy Weather", "")
    };
    evolutionMap["Whitesnake"] = {
        Stand("Whitesnake", "La habilidad principal de Whitesnake es transformar una parte o la totalidad de la psique de una persona o su [Stand] (espíritu) en Discos humanamente tangibles. Para ello, Whitesnake debe tocar a su víctima y físicamente extraer el disco de ellos. Estos discos se pueden insertar en otras personas, lo que les permite leer las memorias o utilizar Stands almacenados en el disco. Los discos son permanentes, existentes incluso mucho tiempo después de que Whitesnake deja de existir; la única manera de destruirlos es insertarlos en una persona moribunda, en cuyo caso el disco desaparece."),
        Stand("C-Moon", "C-Moon le otorga a su usuario una masa negativa proporcional a la de la Tierra, con un alcance efectivo de tres kilómetros. Por lo tanto, cualquier cuerpo no fijado dentro de su alcance es alejado por la fuerza gravitatoria inversa de Pucci, cayendo paralelamente al suelo. El efecto desaparece una vez el cuerpo salga del alcance de la habilidad. C-Moon también puede aumentar enormemente la fuerza gravitacional que actúa sobre un objeto al tocarlo, provocando que ese objeto sea girado de adentro hacia afuera. Si toca o golpea el mismo objeto o área, vuelve a revertir este cambio. Por su asociación con C-Moon, Pucci parece ser capaz de desafiar la gravedad y la órbita de cualquier enemigo o amenaza."),
        Stand("Made In Heaven", "Permite a su usuario moverse a velocidad infinita tras acelerar por un breve periodo de tiempo. Además de poder acelerar el transcurso del tiempo hasta llegar al punto de reiniciar el universo.")
    };
    evolutionMap["Tusk"] = {
        Stand("Tusk ACTO 1", ""),
        Stand("Tusk ACTO 2", ""),
        Stand("Tusk ACTO 3", ""),
        Stand("Tusk ACTO 4", "")
    };
    evolutionMap["Dirty Deeds Done Dirt Cheap"] = {
        Stand("Dirty Deeds Done Dirt Cheap", ""),
        Stand("D4C: Love Train", "")
    };
    evolutionMap["Soft & Wet"] = {
        Stand("Soft & Wet de Josefumi", ""),
        Stand("Soft & Wet", ""),
        Stand("Soft & Wet: Go Beyond!", "")
    };
}

Fruit generateFruit() {
    int fruitIndex = generateRandomNumber(0, fruitArray.size() - 1);
    return fruitArray[fruitIndex];
}

string generateFruitMastery() {
    int masteryLvl = generateRandomNumber(1, 3);
    switch (masteryLvl)
    {
    case 1:
        return "Básica";

    case 2:
        return "Avanzada";

    case 3:
        return "Despertada";

    default:
        return "Básica";
    }
}

Stand generateStand() {
    int standIndex = generateRandomNumber(0, standArray.size() - 1);
    return standArray[standIndex];
}

Stand generateStandEvolution(const string& standName) {
    auto evolutions = evolutionMap[standName];
    int standIndex = generateRandomNumber(0, evolutions.size() - 1);

    return evolutions[standIndex];
}

string generateStrength() {
    int strengthLvl = generateRandomNumber(1, 6);
    switch (strengthLvl)
    {
    case 1:
        return "Soldado raso de la marina";

    case 2:
        return "Gyojin fuerte";

    case 3:
        return "Capitan de la marina";

    case 4:
        return "Vice Almirante";

    case 5:
        return "Casi yonko";

    case 6:
        return "Yonko+";

    default:
        return "Soldado raso marina";
    }
}

hakiList generateHakiMastery(hakiList& hList) {
    if (hList[0].first != "Sin haki") {
        for (int i = 0; i < hList.size(); ++i) {
            int mastery = generateRandomNumber(1, 4);
            switch (mastery)
            {
            case 1:
                hList[i].second = "Básica";
                break;

            case 2:
                hList[i].second = "Avanzada";
                break;

            case 3:
                hList[i].second = "Casi yonko";
                break;

            case 4:
                hList[i].second = "Yonko+";
                break;

            default:
                hList[i].second = "Básica";
                break;
            }
        }
    }

    return hList;
}

hakiList generateHaki() {
    hakiList hList;
    int probab = generateRandomNumber(1, 100);

    if (probab == 1) hList.push_back(make_pair("Haoshoku", "")); //1%
    else if (probab <= 5) hList.push_back(make_pair("Sin haki", "Nula")); //4%
    else if (probab <= 15) { //10%
        hList.push_back(make_pair("Busoshoku", ""));
        hList.push_back(make_pair("Haoshoku", ""));
    }
    else if (probab <= 25) { //10%
        hList.push_back(make_pair("Kenbunshoku", ""));
        hList.push_back(make_pair("Haoshoku", ""));
    }
    else if (probab <= 40) { //15%
        hList.push_back(make_pair("Busoshoku", ""));
        hList.push_back(make_pair("Kenbunshoku", ""));
        hList.push_back(make_pair("Haoshoku", ""));
    }
    else if (probab <= 60) hList.push_back(make_pair("Busoshoku", "")); //20%
    else if (probab <= 80) hList.push_back(make_pair("Kenbunshoku", "")); //20%
    else { //20%
        hList.push_back(make_pair("Busoshoku", ""));
        hList.push_back(make_pair("Kenbunshoku", ""));
    }

    return hList;
}

string generateSpin() {
    int probab = generateRandomNumber(1, 100);
    if (probab <= 15) return "Sin spin"; //15%
    if (probab <= 40) return "Spin infinito"; //25%
    if (probab <= 70) return "Spin básico"; //30%
    else return "Spin áureo"; //30%
}

Stand getSpecificEvolution(const string standName, const int index) {
    return evolutionMap[standName][index];
}