class Turtle
{
    private var name: String;

    public function new(name: String) {
        this.name = name;
    }

    public function getName() : String {
        return this.name;
    }

    static function main() {
        trace("Hello World !");

        var t = new Turtle("Timmy");
        trace(t.getName());
    }
}
