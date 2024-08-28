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
    Stand("Star Platinum", "", true),
    Stand("Silver Chariot", "", true),
    Stand("Magician's Red", "Magician's Red es un Stand humanoide de rango-medio; su capacidad única es la generación y manipulación del fuego."),
    Stand("Hermit Purple", "Las habilidades físicas de Hermit Purple son relativamente débiles, pero proporcionan a su usuario con una considerable habilidad de adivinación, permitiéndole divinizar y materializar cualquier tipo de información como una imagen, un lugar o incluso pensamientos."),
    Stand("Hierophant Green", "Control de Marioneta. Tentáculos: Hierophant Green. Cuerpo en Espiral: Hierophant Green. Emerald Splash"),
    Stand("The Fool", "Manipulación de arena. Cambio de forma."),
    Stand("Holy's Stand", ""),
    Stand("Jonathan's Stand", ""),
    Stand("Tower of Gray", ""),
    Stand("Dark Blue Moon", ""),
    Stand("Strength", ""),
    Stand("Ebony Devil", ""),
    Stand("Yellow Temperance", ""),
    Stand("Hanged Man", ""),
    Stand("Emperor", ""),
    Stand("Empress", ""),
    Stand("Wheel of Fortune", ""),
    Stand("Justice", ""),
    Stand("Lovers", ""),
    Stand("Sun", ""),
    Stand("Death Thirteen", ""),
    Stand("Judgement", ""),
    Stand("High Priestess", ""),
    Stand("Geb", ""),
    Stand("Khnum", ""),
    Stand("Tohth", ""),
    Stand("Anubis", ""),
    Stand("Bastet", ""),
    Stand("Sethan", ""),
    Stand("Osiris", ""),
    Stand("Horus", ""),
    Stand("Atum", ""),
    Stand("Tenore Sax", ""),
    Stand("Cream", ""),
    Stand("The World", ""),


    //Parte 4
    Stand("Crazy Diamond", "Crazy Diamond tiene la habilidad de remoldear la materia. Siempre y cuando toque una parte del objeto, Crazy Diamond es capaz de restaurarlo al estado que su usuario desee."),
    Stand("The Hand", "Cuando The Hand usa su mano derecha, puede borrar todo lo que entre en contacto con la palma cuando hace un movimiento de deslizamiento con su brazo. Todo lo que esté dentro de su rango de acción, se borra de este universo, ya se trate de objetos físicos o el espacio en sí."),
    Stand("Echoes", "", true),
    Stand("Heaven's Door", "Heaven's Door convierte al individuo afectado en un gigantesco libro el cual queda expuesto por completo dependiendo de donde sea abierto con la piel completamente descamada y segmentada en páginas que cuentan la historia de su vida. Todo lo que se escriba dentro se cumplirá siempre."),
    Stand("Aqua Necklace", "Aqua Necklace puede disfrazarse de cualquier clase de líquido y poseer a la gente desde el interior para controlarlos entrando fácilmente en el cuerpo a través de la boca de su víctima."),
    Stand("Bad Company", ""),
    Stand("Red Hot Chili Pepper", ""),
    Stand("The Lock", ""),
    Stand("Surface", ""),
    Stand("Love Deluxe", ""),
    Stand("Pearl Jam", ""),
    Stand("Achtung Baby", ""),
    Stand("Ratt", ""),
    Stand("Harvest", ""),
    Stand("Cinderella", ""),
    Stand("Atom Heart Father", ""),
    Stand("Boy II Man", ""),
    Stand("Earth Wind and Fire", ""),
    Stand("Highway Star", ""),
    Stand("Stray Cat", ""),
    Stand("Super Fly", ""),
    Stand("Enigma", ""),
    Stand("Cheap Trick", ""),
    Stand("Killer Queen", "", true),


    //Parte 5
    Stand("Gold Experience", "", true),
    Stand("Sticky Fingers", ""),
    Stand("Moody Blues", ""),
    Stand("Sex Pistols", ""),
    Stand("Aerosmith", ""),
    Stand("Purple Haze", ""),
    Stand("Spice Girl", ""),
    Stand("Mr.President", ""),
    Stand("Black Sabbath", ""),
    Stand("Soft Machine", ""),
    Stand("Kraft Work", ""),
    Stand("Little Feet", ""),
    Stand("Man in the Mirror", ""),
    Stand("Beach Boy", ""),
    Stand("The Grateful Dead", ""),
    Stand("Baby Face", ""),
    Stand("White Album", ""),
    Stand("Clash", ""),
    Stand("Talking Head", ""),
    Stand("Notorious B.I.G", ""),
    Stand("Metallica", ""),
    Stand("Green Day", ""),
    Stand("Oasis", ""),
    Stand("Rolling Stones", ""),
    Stand("King Crimson", ""),


    //Parte 6
    Stand("Stone Free", "A corta distancia y cuando está ensamblado, Stone Free tiene buena fuerza física pudiendo doblar una moneda, pero no es lo suficientemente fuerte como para doblar y romper los barrotes de una celda además de poder desviar las balas cuando sean disparadas en su contra gracias a su velocidad que es equivalente a la de un meteorito extremadamente pequeño y veloz. Además de esta cualidad, Stone Free también cuenta con habilidades integradas al cuerpo de su usuario, permitiéndole deshacer su cuerpo en la forma de una cuerda extremadamente fina la cual se puede usar de distintas maneras según la situación."),
    Stand("Kiss", "Kiss puede crear pegatinas cuadradas con símbolos de labios en ellas. Si una pegatina es colocada en un objeto, se creará una copia exacta de este. La pegatina permanecerá pegada ya sea en el objeto original o en la copia. El efecto incluye partes del cuerpo, de forma que si se coloca una pegatina en un brazo, se creará una copia como si fuera una extremidad adicional en el cuerpo del afectado. El usuario también puede colocarse pegatinas sobre sí mismo."),
    Stand("Burning Down the House", "Burning Down the House no tiene ninguna manifestación física aparte de una habitación de aspecto normal con un piano, algunos libros, y una gran cantidad de espacio. No tiene personalidad ni puede atacar; sólo sirve como escondite para el usuario."),
    Stand("Foo Fighters", "Permite que los manojos de plancton existan en una forma humanoide. Adopta una personalidad propia. Puede recorrer cuerpos de agua con súper velocidad, producir cuerpos secundarios, desparar extensiones de sí misma, controlar el agua de forma limitada, controlar cuerpos de personas y también puede curar a la gente usando su plancton para coser microscópicamente las heridas rápidamente. Algunas de las heridas más mortales pueden curarse en cuestión de segundos."),
    Stand("Weather Report", "", true),
    Stand("Diver Down", "Diver Down puede imprimir cualquier golpe en cualquier superficie y liberar la energía acumulada cuando lo desee. Además, la habilidad principal de Diver Down es sumergirse dentro de objetos sólidos y luego manipular la materia que los compone. Con esta habilidad, Diver Down puede atacar a un enemigo o un objetivo desde su interior, por ejemplo, reorganizando sus huesos y tendones, o defender a un aliado ocultándose dentro de ellos y recibiendo el ataque en su lugar."),
    Stand("Whitesnake", "", true),
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
    Stand("Ball Breaker", "Ball Breaker encarna la gran cantidad de energía recogida por una esfera de acero cuando la lanzan con spin infinito. Su aplicación principal, por la manipulación de energía, es la aceleración de actividad dentro de las células de un organismo objetivo, llevándolo a un deterioro hasta un punto máximo. Cuando es usado contra un humano, en segundos ellos envejecen drásticamente. El uso de spin infinito de este stand le permite también atravesar dimensiones."),
    Stand("Oh! Lonesome Me", "El stand le permite a su usuario separar los segmentos de su cuerpos o de los demás y deslizarlos libremente a lo largo de su cuerda. También le otorga un control sobrehumano sobre la cuerda, manipulándola libre y precisamente para agarrar objetos pequeños desde lejos."),
    Stand("Scary Monsters", "", true),
    Stand("Cream Starter", "La habilidad principal de Cream Starter es su habilidad para convertir la carne en una sustancia cremosa. El usuario puede rociar una cierta cantidad de carne/crema usando la suya propia, o absorbiendo la carne de un individuo directamente tocándolos."),
    Stand("Ticket to Ride", "El stand le permite al usuario sacar rayas de lágrimas de sus ojos y usarlas como cuchillos. Las cuchillas se descomponen al tacto, por lo que son inutiles como armas. Sin embargo, cuando alcanza exitosamente a algo o alguien, se verá vulnerable a la siguiente habilidad. Además, esta habilidad protege a su usuario de cualquier daño causado creando una reacción en cadena desde el entorno para atacar al oponente."),
    Stand("Dirty Deeds Done Dirt Cheap", "", true),
    Stand("In a Silent Way", "Sandman es capaz de manipular y almacenar sonidos en objetos, o hacerlos en tres dimensiones 'kana'. Cuando un sonido almacenado hace contacto con otro objeto o individuo, se libera como una característica de peligro de ese sonido (por ejemplo, 'quemar', 'cortar', 'apuñalar'). La mejor manera de atacar resulta ser a través del agua, el sonido que viaja más rápidamente en el agua que en el aire. En el aspecto más mortífero de esta habilidad, Sandman puede utilizar furtivamente sonidos no humanamente perceptibles."),
    Stand("Hey Ya!", "Hey Ya! se ve al acecho de su usuario, susurrándole consejos, motivándolo a aprovechar su propia suerte. A pesar de la idea errónea que el Stand mejora la suerte del usuario, no hace nada más que alentar a su usuario y ponerlo de buen humor."),
    Stand("Tomb of the Boom", "", true),
    Stand("Boku no Rhythm wo Kiitekure", "Boku no Rhythm wo Kiitekure tiene la habilidad de insertar bombas de tiempo en prácticamente cualquier cosa. Estas bombas de tiempo toman la forma de pequeños alfileres cubiertos con relojes que se adhieren a cualquier superficie, no sólo la materia sólida. Si los pernos altamente sensibles son perturbados o sacados, esto produce un efecto de granada donde la bomba estalla después de que el pasador haya sido removido. Se ha demostrado que los alfileres se pueden colocar en casi cualquier cosa, incluyendo la piel, el agua, los animales, la suciedad, e incluso el humo del cigarrillo."),
    Stand("Wired", "Wired toma la forma de una manivela y dos cables enganchados dentro del usuario. Los anzuelos del Stand son bastante fuertes, haciendo que pueda levantar a un hombre adulto e incluso a un caballo, y pueden viajar a través de una dimensión del bolsillo a través una cacerola llena de agua. Al dejar caer los cables en un objeto en el agua, puede salir del mismo tipo de objeto lejos del usuario (es decir, si utiliza una pluma como medio, el cable puede aparecer desde cualquier pluma dentro de la rango de Wired). El usuario también puede mirar a través del agua para observar dónde está el enemigo. Debido a la fuerza de los cables, Wired también es efectivo en combate cuerpo a cuerpo."),
    Stand("Mandom", "Girando la mano de su reloj de pulsera (a modo de un interruptor psicológico), Mandom permite al usuario rebobinar el tiempo exactamente 6 segundos; reemplazando todo en su rango a donde y como fue hace 6 segundos; excepto por la experiencia/memoria de los individuos también en su rango. Se puede usar esta habilidad de cualquier manera excepto para invertir el tiempo más allá de la última ocasión."),
    Stand("Catch the Rainbow", "Catch the Rainbow permite a su usuario utilizar o manipular la lluvia de varias formas novedosas, como detener gotas de lluvia en su lugar y pisar un camino a través de ellas. Si un objetivo intenta moverse a través de la lluvia detenida por este Stand, las gotas se desgarran y penetran en ellos. El usuario aparentemente es capaz de fundirse con la lluvia, convirtiéndose en algo intangible como el agua y casi invencible, y proyecta varias partes de su cuerpo a partir de gotas de lluvia, como si fueran portales. El usuario demuestra la habilidad de tapar sus heridas con gotas de lluvia y detener todo sangrado. Fundamentalmente, este Stand es efectivo sólo cuando llueve."),
    Stand("Sugar Mountain's Spring", "Este Stand afecta a un área y se activa cuando una persona deja caer un objeto en el área de influencia del Stand. Entonces un guardián (es decir, Sugar Mountain) ofrece a la persona que dejó caer el objeto una versión mejorada del mismo objeto. Si una persona miente, el árbol lo castiga cortando la lengua de esa persona y matándola. Si una persona dice la verdad, pueden guardar el objeto valioso (junto con el original). Sin embargo, deben usar el objeto valioso en una transacción de compra/venta o intercambio antes del atardecer. Si no, se convertirán en el nuevo guardián del árbol durante el resto de su vida."),
    Stand("Tatoo You!", "Tatoo You! permite que once hombres pasen entre sí usando los tatuajes en sus espaldas como puertas. Incluso cuando los miembros del grupo mueren, pueden mover los cuerpos para posicionarse para atacar. Este Stand es único en el hecho de que once personas lo comparten. Se ha teorizado que debe haber un solo usuario que de alguna manera lo puede compartir con los otros diez miembros, pero esto permanece sin confirmarse."),
    Stand("Tubular Bells", "El poder básico del Stand esencialmente otorga a su usuario la habilidad de inflar artículos metálicos como clavos o tornillos soplando en ellos, como globos. Si el usuario modela un animal, el globo asume una vida propia, con características similares al animal que se asemejan; Tales como el sentido del olfato de un perro y las habilidades de seguimiento. Los animales de globo siguen sus órdenes, pero son capaces de realizar tareas sencillas por su cuenta. Cuando los animales del globo entran en contacto con su objetivo, penetran en su cuerpo y vuelven a su forma original, incrustando su objeto constituyente allí."),
    Stand("20th Century Boy", "Con este stand, si el usuario se pone agazapado en una posición inmóvil, se vuelve completamente inmune a los ataques."),
    Stand("Civil War", "La habilidad Principal de Civil War es manifestar objetos que un objetivo ha dejado atrás, abandonado o se siente culpable hacia el. Estos objetos se unen y se mueven a través del cuerpo del objetivo, creando una delgada membrana que los envuelve lentamente. La membrana se contrae gradualmente hasta que el objetivo es aplastado. Una vez que el objetivo hace contacto con el objeto, instantáneamente recuerdan cómo y por qué lo sacrificaron o se sienten culpables por ello. La debilidad de esta habilidad es el agua, que disuelve la membrana. El Stand en sí mismo puede evitar ataques al romperse en varias piezas, y se muestra para anular efectivamente los ataques de las Esferas de Acero de Gyro. Si el usuario es asesinado y su agresor se siente culpable de matarlo, entonces el usuario vuelve a la vida, y la culpa y los sacrificios del usuario se manifiestan para atacar al agresor. Sin embargo, si el usuario mata a un enemigo y se siente culpable, la situación se invierte con el enemigo revivido y el usuario es atacado por sus propios sacrificios y culpabilidad."),
    Stand("Chocolate Disco", "Chocolate Disco aparece en forma de brazalete con un patrón de cuadrícula de ocho columnas de teclas presionables, sobre las cuales se indican coordenadas con letras y números. Cuando está activado, el mismo tipo de líneas modeladas se extiende desde los pies del usuario, cubriendo unos veinte pies delante de él. Pulsando un botón en el brazalete, cualquier proyectil u objeto puede ser transportado instantáneamente al área correspondiente (por ejemplo, presionando F5 en el brazalete, el objeto cae en F5). Incluso si los objetos no se movían, parecen caer con gran fuerza y velocidad. La fuerza detrás de este Stand es el momento."),

    //Parte 8
    Stand("Soft & Wet", "", true),
    Stand("Paisley Park", "La habilidad primaria de Paisley Park consiste en asistir a individuos importantes para su usuario en la búsqueda y el alcance de destinos u objetivos de manera más expeditiva, o escapando de situaciones peligrosas. Paisley Park también permite al usuario interaccionar con varios aparatos electrónicos a un nivel más allá de lo humanamente posible. Paisley Park puede cambiar libremente su forma para ayudar a orientarse a su usuario."),
    Stand("Nut King Call", "Puede colocar tuercas y pernos en un objetivo, de forma que se crean articulaciones funcionales en donde las colocó. Cuando un perno se separa de una tuerca, el objetivo se separa o desarma. Puede también unir dos objetos entre sí utilizando una tuerca y un perno"),
    Stand("Paper Moon King", "Este stand es capaz de eliminar la percepción de las caras si uno de los modelos de origami que crea toca a alguien. Además, estos modelos de origami adoptan características reales del objeto representado por el papel."),
    Stand("King Nothing", "King Nothing es capaz de rastrear a las personas por su olor, tomando parcialmente la forma de la persona rastreada mientras camina lentamente a lo largo."),
    Stand("Fun Fun Fun", "Si un objetivo incurre en la menor lesión en sus manos o pies, una marca se forma allí, lo que le permite controlar ese miembro, siempre y cuando esté físicamente por encima de su víctima. Así, si una marca se acumula en cada extremidad, el usuario gana el control completo de su objetivo."),
    Stand("California King Bed", "Involucra a un objetivo en una especie de juego al que el usuario asigna reglas, implicando un acuerdo (por ejemplo: no puedes mentirme). Cuando el objetivo incumple una regla, California King Bed materializa uno de los recuerdos de su objetivo, conservadolos atrapados en orbes que forman parte de piezas de ajedrez que emergen de su cuerpo. Cuando el objetivo del usuario logra que este pise su sombra, el juego termina y sus recuerdos son devueltos."),
    Stand("Born This Way", "La sección motocicleta de Born This Way es muy resistente, capaz de no sólo defenderse contra golpes físicos, sino también capaz de dañar a los atacantes por la diferencia de densidad. El Stand persigue a su objetivo cuando la víctima abre cualquier cosa, incluyendo puertas, cuadernos y teléfonos móviles/celulares. Puede aparecer inmediatamente desde cualquier lugar y emboscar a cualquiera mientras el objetivo abra cualquier cosa. El individuo no tiene que abrir algo intencionalmente, ya que simplemente tocar un objeto tal como se está abriendo también aplicaría. Cuando Born This Way aparece su poder provoca vientos parecidos a los huracanes que pueden congelar y endurecer los objetos, que puede lanzar como armas afiladas. El viento en sí mismo tiene bastante intensidad para golpear detrás a individuos, así como congelar su respiración, sofocándolos."),
    Stand("Les Feuilles", "Les Feuilles permite el movimiento instantáneo de deslizamiento después de aplastar las hojas caídas en la calle y la explanada, que luego pueden regresar al mismo lugar exacto."),
    Stand("I Am a Rock", "Este Stand imbuye un objetivo con una gravedad poderosa que hace que un solo tipo de objeto específico gravite hacia ellos por cualquier medio necesario. Estos objetos tratarán de imbuirse (ya sea como un todo o en pedazos) en el núcleo del objetivo y sólo se puede evitar saliendo del rango del usuario."),
    Stand("Speed King", "El stand es capaz de generar calor muy concentrado en ciertos puntos que haya tocado el usuario o estén de alguna forma conectados entre sí (por ejemplo, puede transmitir el calor a través de una llamada telefónica)."),
    Stand("Doobie Wah!", "Doobie Wah! es un Stand automático increíblemente potente que persigue implacablemente a su objetivo mientras sigan respirando. Se manifiesta a partir su aliento y se convierte en un tornado pequeño pero altamente destructivo capaz de cortar fácilmente a través de la carne."),
    Stand("Love Love Deluxe", "Con Love Love Deluxe, el usuario tiene el control sobre el pelo de otras personas, pero sólo dentro de una gama de 80 metros de sí misma."),
    Stand("Schott Key No.1", "Permite al usuario transferir objetos que toca con su mano izquierda para ser transferidos al trozo rocoso donde solía estar su mano derecha. Los objetos transferidos entre las manos parecen disolverse y desmoronarse como roca, y el usuario puede manipular libremente el objeto transferido."),
    Stand("Schott Key No.2", "Es un stand automático que libera constantemente un gas tóxico, cuya resistencia no se muestra en su totalidad. El gas ha podido quemar la piel de Josuke en contacto y le ha hecho difícil respirar, lo que sugiere que a toda potencia podría matar a una persona. Debido a que Schott Key No.2 es automático, se mantiene dentro de una pelota de fútbol con cremallera y el gas sólo se libera cuando se abre la cremallera."),
    Stand("Vitamin C", "Vitamin C es capaz de licuar o suavizar a los organismos vivos. Puede controlar el nivel de viscosidad y elasticidad de los cuerpos vivientes como si de arcilla se tratara. La persona afectada puede perder el control de su cuerpo y casi disolverse y licuarse. Sin embargo, para que esta habilidad surta efecto, el objetivo debe tocar, como mínimo, una de las huellas dactilares de Vitamin C, o las manos de su usuario. Esta habilidad también afecta a Stands."),
    Stand("Walking Heart", "Walking Heart permite a su usuario convertir los tacones de sus zapatos en estacas endurecidas, haciéndolos extenderse hasta 4 metros."),
    Stand("Milagro Man", "La historia de la maldición de Milagro Man se originó de su habilidad. Cualquier persona afligida por su poder constantemente ganará dinero hasta que son literalmente enterrado en efectivo. No importa cómo tratan de gastar o destruir el dinero, será devuelto a ellos y de alguna manera continuamente recibirá más dinero. La única manera de escapar del poder de Milagro Man es devolver el dinero al dueño anterior o tener el dinero destruido por otra persona, después de lo cual Milagro Man es transferido a la nueva víctima."),
    Stand("Blue Hawaii", "Blue Hawaii tiene la habilidad de tomar el control o poseer una persona o un animal desde lejos, siempre y cuando hayan tocado físicamente algo que estaba en algún momento conectado al usuario. Un organismo que cae víctima de la habilidad se convertirá en un estado parecido a un zombi y perseguirá implacablemente a un objetivo específico."),
    Stand("Doggy Style", "Este stand le permite a su usuario crear bandas prehensiles similares a vendajes que pueden agarrar objetos a distancia. Además, el usuario puede ser deshilachado para evitar ataques y daños, si se vuelve a enrollar, sanará."),
    Stand("Brain Storm", "Brain Storm es un Stand bacteriano que su usuario envía de sus manos, que puede derretir la carne de cualquiera que la toque. Cuando el stand penetra en la piel, causa hemólisis y penetra más profundamente en el cuerpo, multiplicándose exponencialmente. Esto hace que el cuerpo del objetivo se descomponga como si se estuvieran cavando agujeros en él. Para evitarlo, hay que amputar la extremidad afectada o lavar la zona infectada con agua antes de que penetre en la carne."),
    Stand("Ozone Baby", "Cuando es enterrado en el suelo, Ozone Baby comienza a aumentar la presión atmosférica en un área alrededor de él hasta un límite desconocido. Las paredes de habitaciones cerradas actúan como barreras del poder del stand."),
    Stand("Doctor Wu", "Este stand le da al usuario la habilidad de convertirse en grava. De esta forma, el doctor Wu puede invadir los cuerpos de otras personas y tomar control de sus movimientos, fusionandose con partes del cuerpo como los huesos. En su forma de grava parece poder inducir una reacción alérgica en aquellos a los que ataca si lo inhalan, ya que es esencialmente un cuerpo desconocido. También puede agregar otras sustancias a su forma de grava."),
    Stand("Awaking III Leaves", "Awaking III Leaves tiene el poder de manipular el espacio vectorial al generar flechas que su usuario puede colocar en cualquier dirección. Puede mover energía hacia donde apuntan las flechas, lo que le permite negar cualquier entidad ajena en el area del usuario, el interior del usuario o donde sea que se coloquen las flechas."),
    Stand("Wonder of U", "Wonder of U a demostrado poseer un potente y extraño poder denominado como calamidad, que consiste en traer mala fortuna y peligro constante a quienes tengan la intención de perseguirlo a él o a su usuario. El stand es independiente, se puede teletransportar, atravesar superfícies, multiplicarse, volar, puede adoptar la apariencia de otros seres humanos y es capaz de esconderse en recovecos. Cuando alguien tiene intención de hacerle cualquier mal, una calamidad lo detendrá pase lo que pase y lo dañará gravemente."),
    Stand("Space Trucking", "La habilidad de Space Trucking le permite a su usuario almacenar objetos y seres vivos dentro del espacio entre sus cartas como si no hubiera nada allí. Es capaz de almacenar objetos que son considerablemente más grandes que la carta."),

};

map<string, vector<Stand>> evolutionMap;

void stablishEvolutions() {
    evolutionMap["Star Platinum"] = {
        Stand("Star Platinum", "Es uno de los Stands más poderosos de la serie. Su abrumadora destreza física en cada característica básica salvo el alcance, permite que su usuario prevalezca repetidamente contra muchos usuarios de Stand incluso sin el uso de ninguna habilidad especial."),
        Stand("Star Platinum: The World", "Es uno de los Stands más poderosos de la serie. Tiene abrumadora destreza física en cada característica básica, salvo el alcance. Además, puede detener el tiempo.")
    };
    evolutionMap["Silver Chariot"] = {
        Stand("Silver Chariot", "Silver Chariot es un poderoso Stand, dedicado a la batalla. Todos sus poderes son destructivos en la naturaleza o ayudan al Stand en batalla. Es un Stand muy ágil, capaz de atacar a los enemigos con bombardeo de tajos de espada y estocadas antes que el oponente pueda reaccionar. También puede utilizar esta agilidad, junto con su espada, para defender y desviar los ataques dirigidos a el o a su usuario."),
        Stand("Chariot Requiem", "Tras la activación, Chariot Réquiem pone a todos los seres vivos en una gran área en un sueño vigoroso. A continuación, cambia el alma de un organismo con el del cuerpo más cercano, independientemente de la especie. Si un cuerpo muere físicamente, el alma que lo habita morirá también.")
    };
    evolutionMap["Echoes"] = {
        Stand("Huevo", "Este stand no hace nada, ni siquiera puedes moverlo."),
        Stand("Echoes ACTO 1", "El stand puede escribir un efecto de sonido en katakana sobre cualquier cosa, desde carne humana hasta el suelo, y hacer que el sonido se repita una y otra vez con un volumen cada vez más elevado. Echoes puede disparar efectos de sonido tanto desde su cola como de sus manos."),
        Stand("Echoes ACTO 2", "Echoes puede escribir un efecto de sonido en cualquier superficie. Sin embargo, sólo es capaz de disparar efectos de sonido desde su cola, lo que lo limita a un solo efecto de sonido a la vez. Cuando se toca el efecto de sonido, se produce un efecto relacionado con el sonido."),
        Stand("Echoes ACTO 3", "Puede golpear rápidamente su objetivo antes de atribuir un efecto de congelación o de detención aumentando considerablemente su peso efectivo. Sólo puede afectar a un objetivo a la vez.")
    };
    evolutionMap["Killer Queen"] = {
        Stand("Killer Queen", "Con sus manos, Killer Queen convierte cualquier cosa que toque en una bomba y puede detonarla cuando quiera. Además, tiene a Sheer Heart Attack, un pequeño stand automático indestructible que explota las veces que sean necesarias cuando llega a su objetivo al cual rastrea por el calor."),
        Stand("Killer Queen: Bites the Dust", "Con sus manos, Killer Queen convierte cualquier cosa que toque en una bomba y puede detonarla cuando quiera. Además, tiene a Sheer Heart Attack, un pequeño stand automático indestructible que explota las veces que sean necesarias cuando llega a su objetivo al cual rastrea por el calor. Con Bites the Dust, el usuario puede decidir un objetivo que funcionará como interruptor al decir o escribir cierta palabra. Cuando esta bomba explote, el usuario viajará una hora o un día atrás en el tiempo.")
    };
    evolutionMap["Gold Experience"] = {
        Stand("Gold Experience", "Gold Experience puede generar una cantidad aparentemente infinita de energía vital y dotar de esa energía a cualquier cosa que toque con sus puños. Esta habilidad se traduce en una gran variedad de efectos. Puede crear vida a partir de objetos, curar a seres vivos, distorsionar la percepción de su objetivo y tiene un sensor de vida."),
        Stand("Gold Experience Requiem", "Gold Experience Requiem cuenta con un increíble incremento en velocidad y potencia a comparación de su forma anterior. Sin embargo su habilidad más poderosa reside en la capacidad de revertir las acciones del oponente a su punto inicial, anulando toda acción dirigida en su contra. Además, puede proyectar a modo de láser objetos pequeños y sigue pudiendo crear vida a partir de materia.")
    };
    evolutionMap["Weather Report"] = {
        Stand("Weather Report", "Weather Report es un stand versátil que posee un control casi completo sobre el clima a escala global. Teniendo control sobre los fenómenos meteorológicos, las habilidades de Weather Report también se extienden a la manipulación del agua, el viento, la electricidad, e incluso el frío, así como otros fenómenos elementales."),
        Stand("Heavy Weather", "Weather Report es un stand versátil que posee un control casi completo sobre el clima a escala global. Teniendo control sobre los fenómenos meteorológicos, las habilidades de Weather Report también se extienden a la manipulación del agua, el viento, la electricidad, e incluso el frío, así como otros fenómenos elementales. Además, este genera multitud de arcoíris por todas partes que convertirán en un caracol a quién los toque, siendo este efecto contagioso para los que toquen a los caracoles también.")
    };
    evolutionMap["Whitesnake"] = {
        Stand("Whitesnake", "La habilidad principal de Whitesnake es transformar una parte o la totalidad de la psique de una persona o su [Stand] (espíritu) en Discos humanamente tangibles. Para ello, Whitesnake debe tocar a su víctima y físicamente extraer el disco de ellos. Estos discos se pueden insertar en otras personas, lo que les permite leer las memorias o utilizar Stands almacenados en el disco. Los discos son permanentes, existentes incluso mucho tiempo después de que Whitesnake deja de existir; la única manera de destruirlos es insertarlos en una persona moribunda, en cuyo caso el disco desaparece."),
        Stand("C-Moon", "C-Moon le otorga a su usuario una masa negativa proporcional a la de la Tierra, con un alcance efectivo de tres kilómetros. Por lo tanto, cualquier cuerpo no fijado dentro de su alcance es alejado por la fuerza gravitatoria inversa de Pucci, cayendo paralelamente al suelo. El efecto desaparece una vez el cuerpo salga del alcance de la habilidad. C-Moon también puede aumentar enormemente la fuerza gravitacional que actúa sobre un objeto al tocarlo, provocando que ese objeto sea girado de adentro hacia afuera. Si toca o golpea el mismo objeto o área, vuelve a revertir este cambio. Por su asociación con C-Moon, Pucci parece ser capaz de desafiar la gravedad y la órbita de cualquier enemigo o amenaza."),
        Stand("Made In Heaven", "Permite a su usuario moverse a velocidad infinita tras acelerar por un breve periodo de tiempo. Además de poder acelerar el transcurso del tiempo hasta llegar al punto de reiniciar el universo.")
    };
    evolutionMap["Tusk"] = {
        Stand("Tusk ACTO 1", "Tusk ACTO 1 le da a su usuario la capacidad de usar spin sobre sus uñas, haciendo que roten a una gran velocidad y pudiendo lanzarlas como si de proyectiles se tratasen. Su potencia y precisión son mayores a los de una bala normal, hasta el punto de poder tallar un árbol y darle forma humanoide en pocos segundos."),
        Stand("Tusk ACTO 2", "Tusk ACTO 2 aumenta considerablemente la potencia y el rango de los disparos. Además de esto, los agujeros creados por las uñas bala son capaces de moverse sobre la superficie donde impactaron y las superficies que están en contacto con esta, dejando un rastro por donde se mueven. Estos agujeros perseguirán a cualquier persona u objeto que su usuario quiera, y una vez alcancen a su objetivo, o ya no puedan seguir moviéndose, dañaran la zona donde se encuentren."),
        Stand("Tusk ACTO 3", "Tusk ACTO 3 le da la capacidad al usuario de succionar partes de su cuerpo al lugar donde la espiral de spin rota; el punto más pequeño posible. Para esto, este tiene que dispararse a sí mismo con sus uñas balas con Proporción Áurea. El usuario es capaz de combinar esto con la habilidad de agujeros móviles de ACTO 2, permitiéndole mover, por ejemplo, su mano a zonas lejanas o mejor posicionadas para alcanzar sus objetivos. Así, el usuario puede disparar sus uñas desde diferentes direcciones. También puede usar esta capacidad para ocultar y resguardar partes de su cuerpo, como la mitad del mismo."),
        Stand("Tusk ACTO 4", "Tusk ACTO 4, además de poseer gran poder físico, le da la capacidad al usuario de disparar uñas con spin infinito que causan daño eternamente al objetivo. Además el stand es inmune a cambios espacio-temporales como cambios de dimensión o control del tiempo. También puede abrir portales espacio-temporales y moverse libremente a través de ellos.")
    };
    evolutionMap["Scary Monsters"] = {
        Stand("Scary Monsters del Dr. Ferdinand", "Scary Monsters demuestra la habilidad de infectar a otros seres vivos con un virus que los transforma en dinosaurios y los hace caer bajo las órdenes directas del usuario. Cada persona o animal infectado tiene un aspecto y Habilidades diferentes, así como la habilidad de infectar a otros con el virus mordiéndolos o rasgándolos. El Stand parece no tener límites en términos de rango o número de individuos infectados. Sin embargo, si el usuario se lesiona gravemente, sus poderes desaparecerán y todos los dinosaurios volverán a su forma original."),
        Stand("Scary Monsters de Dio", "El usuario es capaz de cambiar su propio cuerpo en un dinosaurio, ya sea completamente o como un híbrido de los dos. Mientras que se transforma, él ha aumentado la resistencia, la fuerza, la velocidad y la visión, junto con la habilidad de comer cualquier cosa. sobrepasa con mucho los límites humanos y le permite tocar stands.")
    };
    evolutionMap["Dirty Deeds Done Dirt Cheap"] = {
        Stand("D4C", "Permite que diferentes mundos/dimensiones paralelas coexistan al mismo tiempo y en el mismo lugar. También permite a su usuario visitar estos mundos paralelos e interaccionar con ellos. El usuario viaja al ser encerrado entre dos objetos. Los materiales líquidos, como el agua, cuentan como objetos, e incluso el polvo o el vapor. El usuario solo necesita una parte de sí mismo entre dos objetos para poder saltar entre las dimensiones. Además, el usuario puede cambiar su cuerpo por el de un universo paralelo las veces que quiera, librándose de heridas y daños. Si otra cosa que no sea el usuario se encuentra con su versión de otro universo será destruída."),
        Stand("D4C: Love Train", "Permite que diferentes mundos/dimensiones paralelas coexistan al mismo tiempo y en el mismo lugar. También permite a su usuario visitar estos mundos paralelos e interaccionar con ellos. El usuario viaja al ser encerrado entre dos objetos. Los materiales líquidos, como el agua, cuentan como objetos, e incluso el polvo o el vapor. El usuario solo necesita una parte de sí mismo entre dos objetos para poder saltar entre las dimensiones. Además, el usuario puede cambiar su cuerpo por el de un universo paralelo las veces que quiera, librándose de heridas y daños. Si otra cosa que no sea el usuario se encuentra con su versión de otro universo será destruída. En la forma de Love Train, el usuario recrea el nacimiento de Jesucristo y se vuelve invencible ya que toda desgracia es desviada por un campo generado a partir del cuerpo sagrado, dejando sólo la buena fortuna.")
    };
    evolutionMap["Tomb of the Boom"] = {
        Stand("Tomb of the Boom 1", "Puede dejar que objetos metálicos se hundan en su piel para replicar la apariencia de otra persona, así como aumentar su defensa. También puede desovar láminas metálicas de su cuerpo después de dejar que los objetos metálicos se hundan en él. Por último, puede hacer que los objetos de metal se contraigan al eliminar partículas de hierro de ellos."),
        Stand("Tomb of the Boom 2", "Es el más poderoso de los tres. Su habilidad le permite convertir cualquier ser viviente en un imán dejándoles tocar cualquier parte de él, esto incluye algunas gotas de sangre. Puede magnetizar a varias personas a la vez; ellos, y los objetos de metal cerca de ellos, se atraen el uno al otro. Este magnetismo es tan poderoso que los cuerpos de las víctimas se desgarran."),
        Stand("Tomb of the Boom 3", "Es el más combatido de los tres, y tiene la habilidad de manipular la arena de hierro, para poder inmovilizar sus objetivos. También es capaz de atraer objetos metálicos pequeños. Por último, es capaz de matar a una persona mediante la manipulación de las partículas de hierro en su sangre para chuparla.")
    };
    evolutionMap["Soft & Wet"] = {
        Stand("Soft & Wet de Josefumi", "A parte de su gran fortaleza física, el stand puede sacar burbujas capaces de pegar y fusionar cosas a nivel molecular absorbiendo ciertos aspectos de algún objeto o ser vivo e insertándolo en otras."),
        Stand("Soft & Wet", "A parte de su excepcional fortaleza física, su usuario puede robar aspectos o propiedades de cosas vivas o inanimadas gracias a burbujas generadas por el stand. Dichas propiedades pueden ser características físicas o también objetos más pequeños que provienen de un objeto más grande. Los estallidos de las burbujas actúan como pequeñas bombas que generan impulso."),
        Stand("Soft & Wet: Go Beyond", "Las burbujas generadas por el stand son en realidad cuerdas imbuidas en spin infinito, haciendo que estas sean infinitamente cercanas a 0 y no existan en este mundo, pudiendo así desobedecer sus leyes y su lógica. Las burbujas pueden atravesar cualquier cosa, ir en direcciones imprevisibles y son absolutamente imperceptibles.")
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
        return "Capitán de la marina";

    case 4:
        return "Vice Almirante";

    case 5:
        return "Casi yonko";

    case 6:
        return "Yonko+";

    default:
        return "Soldado raso de la marina";
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
