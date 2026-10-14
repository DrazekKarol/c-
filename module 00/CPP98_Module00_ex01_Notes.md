# Module 00 - ex01 Notes

## What this exercise wants
- Make a small phonebook program using two classes: `PhoneBook` and `Contact`.
- No dynamic allocation.
- Store at most 8 contacts.
- If a 9th contact is added, replace the oldest one.
- Use C++98 style: classes, methods, `std::string`, `std::cout`, `std::getline`.

## Easy picture of the program
- `PhoneBook` is the boss.
- `Contact` is one person.
- `PhoneBook` keeps an array of 8 `Contact` objects.
- The user types commands:
  - `ADD`
  - `SEARCH`
  - `EXIT`

## Simple flow
1. Start the program.
2. Show the command menu.
3. Read a command.
4. If the command is `ADD`, ask for all contact fields.
5. If the command is `SEARCH`, show the table and let the user choose an index.
6. If the command is `EXIT`, quit.
7. Any other input is ignored.

## What each class does

### Contact
- Stores one person’s data.
- Usually keeps these fields private:
  - first name
  - last name
  - nickname
  - phone number
  - darkest secret
- Has functions to save data and print data.

### PhoneBook
- Stores the array of contacts.
- Knows how many contacts are currently saved.
- Knows which contact is the oldest one.
- Asks the user for input.
- Shows the search table.

## Very clear example

If the user does this:

```text
ADD
John
Doe
JD
123456
Likes pizza
```

Then one `Contact` object stores:
- first name = `John`
- last name = `Doe`
- nickname = `JD`
- phone number = `123456`
- darkest secret = `Likes pizza`

## Important rules for the table
- Show 4 columns:
  - index
  - first name
  - last name
  - nickname
- Each column is 10 characters wide.
- If text is too long, cut it and replace the last visible character with `.`.
- Right-align the text.
- Use `iomanip` for formatting.

## Example of truncation
- `Christopher` becomes `Christoph.`
- `Alex` stays `Alex`

## Good C++98 habits for this exercise
- Use `std::string` instead of raw character arrays.
- Use `std::getline` to read full lines safely.
- Use `const` for functions that do not change the object.
- Keep data private and functions public when needed.
- Prefer simple arrays over STL containers here, because Module 00 does not allow containers.

## Example implementation idea

```cpp
class PhoneBook
{
private:
    Contact contacts[8];
    int contactCount;
    int oldestIndex;

public:
    void addContact();
    void searchContacts() const;
};
```

```cpp
void PhoneBook::addContact()
{
    contacts[oldestIndex].setContact(first, last, nick, phone, secret);
    oldestIndex = (oldestIndex + 1) % 8;
    if (contactCount < 8)
        ++contactCount;
}
```

## Why the oldest contact is replaced
- The phonebook can hold only 8 contacts.
- When it becomes full, the 9th contact must overwrite the oldest one.
- A small counter with modulo 8 is the easiest way to do this.

## Short memory trick
- `PhoneBook` = storage and commands.
- `Contact` = one person.
- `ADD` = fill one contact.
- `SEARCH` = show table and details.
- `EXIT` = stop program.