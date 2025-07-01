// in riscv/insns/macrst.h

// Logica per l'istruzione MACRST (macrst rd)
// Comportamento: Salva il valore corrente di ACC, azzera ACC,
// e scrive il valore salvato in rd.

// 1. Leggi il valore corrente dell'accumulatore e salvalo in una variabile temporanea.
reg_t last_acc_val = p->get_state()->acc_reg;

// 2. Resetta l'accumulatore a 0 per le operazioni successive.
p->get_state()->acc_reg = 0;

// 3. Scrivi il valore letto in precedenza nel registro destinazione (rd).
WRITE_RD(last_acc_val);