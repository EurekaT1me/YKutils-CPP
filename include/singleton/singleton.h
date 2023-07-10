/** singleton: 单例模式的模版化实现  */

namespace YKutils {
template <typename T>
class Singleton {
  public:
    static T &getInstance() {
        static T instace;
        return instance;
    }
    Singleton(T &&) = delete;
    Singleton(const T &) = delete;
    Singleton &operator=(const T &) = delete;
    Singleton &operator=(T &&) = delete;

  protected:
    Singleton() = default;
    virtual ~Singleton() = default;
};
} // namespace YKutils