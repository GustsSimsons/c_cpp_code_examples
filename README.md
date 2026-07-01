## c_examples — singly linked list (LIFO)

Built a linked list in C and made it act like a stack LIFO (However pop() function is not O(1) but O(n))

- `append()` adds to the end
- `pop()` removes from the end
- `printList()` just prints it out so I can see whats going on

## cpp_examples — console battle sim

Tiny battle sim. Hero fights a Goblin, then a Dragon, until one side drops to 0 HP.

- `Entity` — abstract base class (name, health, `attack()` is pure virtual, `takeDamage()`, `isAlive()`)
- `Player` and `Enemy` — inherit from `Entity`
- `Goblin` and `Dragon` — inherit from `Enemy`, Dragon overrides `attack()` to hit harder
