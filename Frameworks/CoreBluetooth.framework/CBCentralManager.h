/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class <CBCentralManagerDelegate>, CBXpcConnection, NSMutableDictionary;

@interface CBCentralManager : NSObject <CBXpcConnectionDelegate> {
    CBXpcConnection *_connection;
    <CBCentralManagerDelegate> *_delegate;
    BOOL _isScanning;
    NSMutableDictionary *_peripherals;
    int _state;
}

@property <CBCentralManagerDelegate> * delegate;
@property(readonly) int state;

- (void)cancelPeripheralConnection:(id)arg1 force:(BOOL)arg2;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleConnectedPeripheralsRetrieved:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handlePeripheralMsg:(int)arg1 args:(id)arg2;
- (void)handlePeripheralsRetrieved:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (void)handleZoneLost:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)orphanPeripherals;
- (id)peripheralForUUID:(id)arg1 args:(id)arg2;
- (void)peripheralWillBeReleased:(id)arg1;
- (void)retrieveConnectedPeripherals;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(BOOL)arg2;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (id)retrievePairedPeripherals;
- (void)retrievePeripherals:(id)arg1;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (void)setDelegate:(id)arg1;
- (int)state;
- (void)stopScan;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(int)arg2 args:(id)arg3;
- (void)xpcConnectionDidReset:(id)arg1;
- (void)xpcConnectionIsInvalid:(id)arg1;

@end