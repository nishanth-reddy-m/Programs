//2.0.15
let name_1 = "Maxwell Wright",name_2 = "Raja Villarreal",name_3 = "Helen Richards";
let phone_1 = "(0191) 719 6495",phone_2 = "0866 398 2895",phone_3 = "0800 1111";
let email_1 = "Curabitur.egestas.nunc@nonummyac.co.uk",email_2 = "posuere.ulpatate@sed.com",email_3 = "libero@convallis.edu";

console.log(name_1+"/"+phone_1+"/"+email_1);
console.log(name_3+"/"+phone_3+"/"+email_3);

//2.2.5
let contacts = [
    {
        name:name_1,
        phone:phone_1,
        email:email_1
    },
    {
        name:name_2,
        phone:phone_2,
        email:email_2
    },
    {
        name:name_3,
        phone:phone_3,
        email:email_3
    }
]
new_contact = {
    name:"Maisie Haley",
    phone:"0913 531 3030",
    email:"risus.Quisque@urna.ca"
}
contacts.push(new_contact);
let length = contacts.length;
let last_index = length - 1;
console.log(`Length = ${length}`);
console.log(`${contacts[0].name} / ${contacts[0].phone} / ${contacts[0].email}`);
console.log(`${contacts[last_index].name} / ${contacts[last_index].phone} / ${contacts[last_index].email}`);