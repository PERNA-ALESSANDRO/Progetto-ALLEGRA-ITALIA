# Progetto-ALLEGRA-ITALIA

inizio: 01-02-2023	
fine: 08-02-2023 

## Componenti della squadra: 

Bresciani Lorenzo – Perna Alessandro – Fusha Mirel – Di Gangi Serena -- Pasinetti Mattia  

 

## 01/02/2023:  

Abbiamo scoperto come inizializzare costanti array e variabili, si inizializzano come in Cstd , dopo aver analizzato la consegna abbiamo inizialmente attaccato i led usando un breadboard collegata al Arduino attraverso dei cavi negativo e positivo. 

 

Visione video su sul funzionamento di Arduino per i partecipanti del gruppo che non sapeva cosa era Arduino: 
##
[NON CONOSCI ARDUINO??? te lo insegno io PUNTATA ZERO <br> <br> <img src="https://i.imgur.com/wRrlatd.jpeg" style="width:75%;">](https://youtu.be/RuttlCNnmVA)

## 07/02/2023: 

 Siamo riusciti ad attaccare uno speaker all'Arduino in modo che il suono si presenti nel caso l’utente inserisca una risposta vera / falsa, stiamo sperimentando righe di codice per il software che andrà a controllare Arduino, siamo riusciti a fare suonare lo speaker solo quando si clicca sul bottone grazie ad un'intuizione del nostro compagno Fusha. 

 

## 08/02/2023: 

Abbiamo attaccato alla nostra breadboard il nostro Arduino, 6 pulsanti accompagnati dalle rispettive resistenze da 10 kΩ , un buzzer (speaker) con resistenza da 330 Ω per segnalare con un suono diverso se l’utente inserisce un dato sbagliato o meno, in seguito abbiamo inserito due led uno rosso, e una verde (dotate di resistenze da 330 Ω) per distinguere a vista se l’utente ha inserito un dato giusto (si accederà il led verde per segnalare che la risposta è giusta) o un dato errato (si accenderà il led rosso per segnalare che la risposta è errata). 

In allegato ci sarà presente una foto del nostro circuito completo assieme ad un link per accedere al progetto TinkerCad. 



## 15/02/2023

Utilizzando le funzioni del monitor seriale siamo riusciti a realizzare l'input dell'array delle risposte. <br>
Abbiamo utilizzato ```Serial.begin``` per inizializzare la comunicazione tra Arduino e il monitor seriale, ```Serial.available``` per verificare che la porta seriale contenesse dei dati, e ```Serial.read``` per leggere i dati dalla porta.

### Progetto Completo
[Collegamento alla pagina di Tinkercad](https://www.tinkercad.com/things/4uLvf9hK6k3?sharecode=T54ZDOl_-0U8An-RBz6f-RuikNFHTi8sgLFsIUhpuMM)

![a](https://i.imgur.com/8rXkutu.png)

- **Repo by: Lorenzo Bresciani, Alessandro Perna**
- **Costruzione circuiti: Mattia Pasinetti**
- **Scrittura codice: Lorenzo Bresciani, Alessandro Perna, Serena Di Gangi**
- **Aggiornamenti stato progetto: Mirel Fusha**

