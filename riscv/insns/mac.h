// In riscv/insns/mac.h

// Logica per l'istruzione MAC (mac rd, rs1, rs2)
// L'operazione è: ACC = ACC + (rs1 * rs2); rd = ACC

// Leggi i valori dai registri sorgente rs1 e rs2
reg_t rs1_val = RS1;
reg_t rs2_val = RS2;

// Esegui la moltiplicazione. Per una gestione a 64-bit completa,
// potresti dover considerare la parte alta del prodotto (mulh),
// ma per un MAC semplice questo è sufficiente.
reg_t product = rs1_val * rs2_val;

// Accedi all'accumulatore tramite p->get_state() e aggiornalo
// 'p' è il puntatore al processore
p->get_state()->acc_reg += product;

// Scrivi il nuovo valore dell'accumulatore nel registro destinazione (rd)
WRITE_RD(p->get_state()->acc_reg);