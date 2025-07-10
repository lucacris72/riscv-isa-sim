// in riscv/insns/macrst.h

// Logica per l'istruzione MACRST
// Comportamento: Calcola il prodotto di rs1 e rs2, lo scrive in rd,
// e imposta l'accumulatore a questo valore, resettando la catena.

// 1. Calcola il prodotto degli operandi.
// La moltiplicazione effettiva può variare in base a come è implementata in Spike.
// Questo è un esempio concettuale.
reg_t product = sext_xlen(RS1 * RS2); 

// 2. Scrivi il prodotto nel registro di destinazione (rd).
WRITE_RD(product);

// 3. Aggiorna lo stato architettonico dell'accumulatore con questo nuovo valore.
// Questo 'resetta' la catena di accumulo al valore del prodotto corrente.
p->get_state()->acc_reg = product;