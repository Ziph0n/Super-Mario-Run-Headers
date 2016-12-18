/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Super Mario Run/Super Mario Run-Structs.h>
@class NSString;

@interface FIRMessagingRmq2PersistentStore : NSObject {

	sqlite3Ref _database;
	NSString* _databaseName;
	unsigned long long _currentDirectory;

}

@property (nonatomic,retain) NSString * databaseName;                          //@synthesize databaseName=_databaseName - In the implementation block
@property (assign,nonatomic) unsigned long long currentDirectory;              //@synthesize currentDirectory=_currentDirectory - In the implementation block
+(id)pathForDatabase:(id)arg1 inDirectory:(unsigned long long)arg2 ;
+(void)removeDatabase:(id)arg1 ;
-(BOOL)moveToApplicationSupportSubDirectory:(id)arg1 ;
-(BOOL)doesFileExistInDirectory:(unsigned long long)arg1 ;
-(id)initWithDatabaseName:(id)arg1 ;
-(id)unackedS2dRmqIds;
-(void)openDatabase:(id)arg1 ;
-(void)removeDatabase;
-(unsigned long long)currentDirectory;
-(void)createTableWithName:(id)arg1 command:(id)arg2 ;
-(void)updateDbWithStringRmqID;
-(void)logErrorAndFinalizeStatement:(sqlite3_stmtRef)arg1 ;
-(void)logError;
-(int)deleteMessagesFromTable:(id)arg1 withRmqIds:(id)arg2 ;
-(BOOL)updateSyncMessageWithRmqID:(id)arg1 column:(id)arg2 value:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)saveUnackedS2dMessageWithRmqId:(id)arg1 ;
-(BOOL)saveMessageWithRmqId:(long long)arg1 tag:(char)arg2 data:(id)arg3 error:(id*)arg4 ;
-(long long)queryHighestRmqId;
-(long long)queryLastRmqId;
-(BOOL)updateLastOutgoingRmqId:(long long)arg1 ;
-(void)scanOutgoingRmqMessagesWithHandler:(/*^block*/id)arg1 ;
-(id)querySyncMessageWithRmqID:(id)arg1 ;
-(BOOL)deleteSyncMessageWithRmqID:(id)arg1 ;
-(int)deleteExpiredOrFinishedSyncMessages:(id*)arg1 ;
-(BOOL)saveSyncMessageWithRmqID:(id)arg1 expirationTime:(long long)arg2 apnsReceived:(BOOL)arg3 mcsReceived:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)updateSyncMessageViaAPNSWithRmqID:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateSyncMessageViaMCSWithRmqID:(id)arg1 error:(id*)arg2 ;
-(void)setDatabaseName:(NSString *)arg1 ;
-(void)setCurrentDirectory:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)lastErrorMessage;
-(int)lastErrorCode;
-(NSString *)databaseName;
-(void)dropTableWithName:(id)arg1 ;
@end
