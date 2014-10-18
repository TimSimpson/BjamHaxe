class Turtle
{
    private var name: String;
    private var spots: Int;

    public function new(name: String, spots: Int) {
        this.name = name;
        this.spots = spots;
    }

    public function getName() : String {
        return this.name;
    }

    static function main() {
        trace("Hello World !");
        var t = new Turtle("Timmy", 4);
        trace(t.getName());
    }

    public function getSpots() : Int {
        return this.spots;
    }
}
