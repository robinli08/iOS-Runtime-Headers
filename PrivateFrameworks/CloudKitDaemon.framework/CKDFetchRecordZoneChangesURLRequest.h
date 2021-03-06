/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordZoneChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining> {
    int  _changeTypes;
    NSMutableDictionary * _nodeErrorsByZoneID;
    NSDictionary * _optionsByRecordZoneID;
    id /* block */  _recordChangedBlock;
    id /* block */  _recordDeletedBlock;
    NSArray * _recordZoneIDs;
    NSMutableDictionary * _requestResultsByRecordZoneID;
    BOOL  _shouldFetchAssetContent;
    NSMutableDictionary * _zoneIDsByRequestOperationUUID;
}

@property (nonatomic) int changeTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableDictionary *nodeErrorsByZoneID;
@property (nonatomic, retain) NSDictionary *optionsByRecordZoneID;
@property (nonatomic, copy) id /* block */ recordChangedBlock;
@property (nonatomic, copy) id /* block */ recordDeletedBlock;
@property (nonatomic, copy) NSArray *recordZoneIDs;
@property (nonatomic, retain) NSMutableDictionary *requestResultsByRecordZoneID;
@property (nonatomic, readonly) NSDictionary *resultsByRecordZoneID;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *zoneErrorsByZoneID;
@property (nonatomic, retain) NSMutableDictionary *zoneIDsByRequestOperationUUID;

- (void).cxx_destruct;
- (id)_handleRecordChanges:(id)arg1;
- (int)changeTypes;
- (id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2;
- (id)nodeErrorsByZoneID;
- (int)operationType;
- (id)optionsByRecordZoneID;
- (id /* block */)recordChangedBlock;
- (id /* block */)recordDeletedBlock;
- (id)recordZoneIDs;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id)requestResultsByRecordZoneID;
- (id)resultsByRecordZoneID;
- (void)setChangeTypes:(int)arg1;
- (void)setNodeErrorsByZoneID:(id)arg1;
- (void)setOptionsByRecordZoneID:(id)arg1;
- (void)setRecordChangedBlock:(id /* block */)arg1;
- (void)setRecordDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setRequestResultsByRecordZoneID:(id)arg1;
- (void)setShouldFetchAssetContent:(BOOL)arg1;
- (void)setZoneIDsByRequestOperationUUID:(id)arg1;
- (BOOL)shouldFetchAssetContent;
- (id)zoneErrorsByZoneID;
- (id)zoneIDsByRequestOperationUUID;
- (id)zoneIDsToLock;

@end
