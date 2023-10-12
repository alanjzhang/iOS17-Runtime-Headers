/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKFelicaTransitAppletState : PKTransitAppletState <NSCopying> {
    bool  _balanceAllowedForCommute;
    NSData * _greenCarDestinationStationCode;
    NSString * _greenCarDestinationStationString;
    NSData * _greenCarOriginStationCode;
    NSString * _greenCarOriginStationString;
    bool  _greenCarTicketUsed;
    NSNumber * _greenCarValidityStartDate;
    bool  _hasGreenCarTicket;
    bool  _hasShinkansenTicket;
    bool  _lowBalanceNotificationEnabled;
    NSNumber * _shinkansenArrivalTime;
    NSNumber * _shinkansenCarNumber;
    NSNumber * _shinkansenDepartureTime;
    NSData * _shinkansenDestinationStationCode;
    NSString * _shinkansenDestinationStationString;
    NSData * _shinkansenOriginStationCode;
    NSString * _shinkansenOriginStationString;
    NSNumber * _shinkansenSeatNumber;
    NSNumber * _shinkansenSeatRow;
    NSNumber * _shinkansenSecondaryArrivalTime;
    NSNumber * _shinkansenSecondaryCarNumber;
    NSNumber * _shinkansenSecondaryDepartureTime;
    NSData * _shinkansenSecondaryDestinationStationCode;
    NSString * _shinkansenSecondaryDestinationStationString;
    NSData * _shinkansenSecondaryOriginStationCode;
    NSString * _shinkansenSecondaryOriginStationString;
    NSNumber * _shinkansenSecondarySeatNumber;
    NSNumber * _shinkansenSecondarySeatRow;
    NSString * _shinkansenSecondaryTrainName;
    bool  _shinkansenTicketActive;
    NSString * _shinkansenTrainName;
    NSNumber * _shinkansenValidityStartDate;
    NSNumber * _shinkansenValidityTerm;
}

@property (getter=isBalanceAllowedForCommute, nonatomic) bool balanceAllowedForCommute;
@property (nonatomic, copy) NSData *greenCarDestinationStationCode;
@property (nonatomic, copy) NSString *greenCarDestinationStationString;
@property (nonatomic, copy) NSData *greenCarOriginStationCode;
@property (nonatomic, copy) NSString *greenCarOriginStationString;
@property (getter=isGreenCarTicketUsed, nonatomic) bool greenCarTicketUsed;
@property (nonatomic, copy) NSNumber *greenCarValidityStartDate;
@property (nonatomic) bool hasGreenCarTicket;
@property (nonatomic) bool hasShinkansenTicket;
@property (getter=isInShinkansenStation, nonatomic, readonly) bool inShinkansenStation;
@property (getter=isLowBalanceNotificationEnabled, nonatomic) bool lowBalanceNotificationEnabled;
@property (nonatomic, copy) NSNumber *shinkansenArrivalTime;
@property (nonatomic, copy) NSNumber *shinkansenCarNumber;
@property (nonatomic, copy) NSNumber *shinkansenDepartureTime;
@property (nonatomic, copy) NSData *shinkansenDestinationStationCode;
@property (nonatomic, copy) NSString *shinkansenDestinationStationString;
@property (nonatomic, copy) NSData *shinkansenOriginStationCode;
@property (nonatomic, copy) NSString *shinkansenOriginStationString;
@property (nonatomic, copy) NSNumber *shinkansenSeatNumber;
@property (nonatomic, copy) NSNumber *shinkansenSeatRow;
@property (nonatomic, copy) NSNumber *shinkansenSecondaryArrivalTime;
@property (nonatomic, copy) NSNumber *shinkansenSecondaryCarNumber;
@property (nonatomic, copy) NSNumber *shinkansenSecondaryDepartureTime;
@property (nonatomic, copy) NSData *shinkansenSecondaryDestinationStationCode;
@property (nonatomic, copy) NSString *shinkansenSecondaryDestinationStationString;
@property (nonatomic, copy) NSData *shinkansenSecondaryOriginStationCode;
@property (nonatomic, copy) NSString *shinkansenSecondaryOriginStationString;
@property (nonatomic, copy) NSNumber *shinkansenSecondarySeatNumber;
@property (nonatomic, copy) NSNumber *shinkansenSecondarySeatRow;
@property (nonatomic, copy) NSString *shinkansenSecondaryTrainName;
@property (getter=isShinkansenTicketActive, nonatomic) bool shinkansenTicketActive;
@property (nonatomic, copy) NSString *shinkansenTrainName;
@property (nonatomic, copy) NSNumber *shinkansenValidityStartDate;
@property (nonatomic, copy) NSNumber *shinkansenValidityTerm;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_concreteTransactionForRecordAtIndex:(unsigned long long)arg1 withBalance:(unsigned int*)arg2 historyRecords:(id)arg3 terminalState:(id)arg4 numberProcessed:(unsigned long long*)arg5 exitedShinkansen:(bool*)arg6;
- (void)_resolveTransactionsFromState:(id)arg1 toState:(id)arg2 withHistoryRecords:(id)arg3 concreteTransactions:(id*)arg4 ephemeralTransaction:(id*)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)greenCarDestinationStationCode;
- (id)greenCarDestinationStationString;
- (id)greenCarOriginStationCode;
- (id)greenCarOriginStationString;
- (id)greenCarValidityStartDate;
- (bool)hasGreenCarTicket;
- (bool)hasShinkansenTicket;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBalanceAllowedForCommute;
- (bool)isEqual:(id)arg1;
- (bool)isGreenCarTicketUsed;
- (bool)isInShinkansenStation;
- (bool)isInStation;
- (bool)isLowBalanceNotificationEnabled;
- (bool)isShinkansenTicketActive;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 mutatedBalances:(id*)arg4 balanceLabelDictionary:(id)arg5 unitDictionary:(id)arg6;
- (void)setBalanceAllowedForCommute:(bool)arg1;
- (void)setGreenCarDestinationStationCode:(id)arg1;
- (void)setGreenCarDestinationStationString:(id)arg1;
- (void)setGreenCarOriginStationCode:(id)arg1;
- (void)setGreenCarOriginStationString:(id)arg1;
- (void)setGreenCarTicketUsed:(bool)arg1;
- (void)setGreenCarValidityStartDate:(id)arg1;
- (void)setHasGreenCarTicket:(bool)arg1;
- (void)setHasShinkansenTicket:(bool)arg1;
- (void)setLowBalanceNotificationEnabled:(bool)arg1;
- (void)setShinkansenArrivalTime:(id)arg1;
- (void)setShinkansenCarNumber:(id)arg1;
- (void)setShinkansenDepartureTime:(id)arg1;
- (void)setShinkansenDestinationStationCode:(id)arg1;
- (void)setShinkansenDestinationStationString:(id)arg1;
- (void)setShinkansenOriginStationCode:(id)arg1;
- (void)setShinkansenOriginStationString:(id)arg1;
- (void)setShinkansenSeatNumber:(id)arg1;
- (void)setShinkansenSeatRow:(id)arg1;
- (void)setShinkansenSecondaryArrivalTime:(id)arg1;
- (void)setShinkansenSecondaryCarNumber:(id)arg1;
- (void)setShinkansenSecondaryDepartureTime:(id)arg1;
- (void)setShinkansenSecondaryDestinationStationCode:(id)arg1;
- (void)setShinkansenSecondaryDestinationStationString:(id)arg1;
- (void)setShinkansenSecondaryOriginStationCode:(id)arg1;
- (void)setShinkansenSecondaryOriginStationString:(id)arg1;
- (void)setShinkansenSecondarySeatNumber:(id)arg1;
- (void)setShinkansenSecondarySeatRow:(id)arg1;
- (void)setShinkansenSecondaryTrainName:(id)arg1;
- (void)setShinkansenTicketActive:(bool)arg1;
- (void)setShinkansenTrainName:(id)arg1;
- (void)setShinkansenValidityStartDate:(id)arg1;
- (void)setShinkansenValidityTerm:(id)arg1;
- (id)shinkansenArrivalTime;
- (id)shinkansenCarNumber;
- (id)shinkansenDepartureTime;
- (id)shinkansenDestinationStationCode;
- (id)shinkansenDestinationStationString;
- (id)shinkansenOriginStationCode;
- (id)shinkansenOriginStationString;
- (id)shinkansenSeatNumber;
- (id)shinkansenSeatRow;
- (id)shinkansenSecondaryArrivalTime;
- (id)shinkansenSecondaryCarNumber;
- (id)shinkansenSecondaryDepartureTime;
- (id)shinkansenSecondaryDestinationStationCode;
- (id)shinkansenSecondaryDestinationStationString;
- (id)shinkansenSecondaryOriginStationCode;
- (id)shinkansenSecondaryOriginStationString;
- (id)shinkansenSecondarySeatNumber;
- (id)shinkansenSecondarySeatRow;
- (id)shinkansenSecondaryTrainName;
- (id)shinkansenTrainName;
- (id)shinkansenValidityStartDate;
- (id)shinkansenValidityTerm;
- (id)transitPassPropertiesWithPaymentApplication:(id)arg1;
- (id)transitPassPropertiesWithPaymentApplication:(id)arg1 fieldCollection:(id)arg2;
- (id)transitPassPropertiesWithPaymentApplication:(id)arg1 pass:(id)arg2;

@end
