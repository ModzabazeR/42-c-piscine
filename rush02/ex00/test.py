def num_to_text(entries: dict, n: int) -> str:
    try:
        return entries[n]
    except KeyError:
        try:
            return f"{entries[n-n%10]} {entries[n%10]}"
        except KeyError:
            return "Error"

dict_list = []
my_dict = dict()

with open("numbers.dict", "r") as f:
    content = f.read()
    dict_list = content.split("\n")

for i in dict_list:
    if i == "":
        continue
    num, value = i.split(":")
    num = int(num.strip())
    value = value.strip()
    my_dict[num] = value

n = int(input("Input a number: "))
print(num_to_text(my_dict, n))
