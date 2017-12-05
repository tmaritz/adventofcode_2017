int main(int argc, char* argv[]) {
    std::vector<char> input(std::istream_iterator<char>(std::ifstream(argv[1])), {});
    std::cout << (std::accumulate(input.begin(), input.end(), std::make_pair(*(input.rbegin()), 0),
        [](auto x, auto c){ return std::make_pair(c, x.second + ((x.first == c) ? (c-'0') : 0));})).second << "\n";
}
