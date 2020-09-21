(*****************************************)
(*      This file is autogenerated       *)
(*   Any manual changes will be LOST!    *)
(*****************************************)
(* Generated 2002-04-05 14:55:57         *)
(*****************************************)
(* This file should be stored in the     *)
(* same directory as the form/datamodule *)
(* with the corresponding model          *)
(*****************************************)
(* Copyright notice:                     *)
(*                                       *)
(*****************************************)

unit ImageDemoClasses;

{$DEFINE ImageDemoClasses_unitheader}
{$INCLUDE ImageDemoClasses_Interface.inc}

uses
  // implementation uses
  // implementation dependencies
  // other
  BoldGeneratedCodeDictionary;

{ Includefile for methodimplementations }


const
  BoldMemberAssertInvalidObjectType: string = 'Object of singlelink (%s.%s) is of wrong type (is %s, should be %s)';

{ TBusinessClassesRoot }

procedure TBusinessClassesRootList.Add(NewObject: TBusinessClassesRoot);
begin
  if Assigned(NewObject) then
    AddElement(NewObject);
end;

function TBusinessClassesRootList.IndexOf(anObject: TBusinessClassesRoot): Integer;
begin
  result := IndexOfElement(anObject);
end;

function TBusinessClassesRootList.Includes(anObject: TBusinessClassesRoot) : Boolean;
begin
  result := IncludesElement(anObject);
end;

function TBusinessClassesRootList.AddNew: TBusinessClassesRoot;
begin
  result := TBusinessClassesRoot(InternalAddNew);
end;

procedure TBusinessClassesRootList.Insert(index: Integer; NewObject: TBusinessClassesRoot);
begin
  if assigned(NewObject) then
    InsertElement(index, NewObject);
end;

function TBusinessClassesRootList.GetBoldObject(index: Integer): TBusinessClassesRoot;
begin
  result := TBusinessClassesRoot(GetElement(index));
end;

procedure TBusinessClassesRootList.SetBoldObject(index: Integer; NewObject: TBusinessClassesRoot);
begin;
  SetElement(index, NewObject);
end;

{ TImageClass }

function TImageClass._Get_M_Image: TBATypedBlob;
begin
  assert(ValidateMember('TImageClass', 'Image', 0, TBATypedBlob));
  Result := TBATypedBlob(BoldMembers[0]);
end;

function TImageClass._GetImage: String;
begin
  Result := M_Image.AsString;
end;

procedure TImageClass._SetImage(NewValue: String);
begin
  M_Image.AsString := NewValue;
end;

function TImageClass._Get_M_Description: TBAString;
begin
  assert(ValidateMember('TImageClass', 'Description', 1, TBAString));
  Result := TBAString(BoldMembers[1]);
end;

function TImageClass._GetDescription: String;
begin
  Result := M_Description.AsString;
end;

procedure TImageClass._SetDescription(NewValue: String);
begin
  M_Description.AsString := NewValue;
end;

procedure TImageClassList.Add(NewObject: TImageClass);
begin
  if Assigned(NewObject) then
    AddElement(NewObject);
end;

function TImageClassList.IndexOf(anObject: TImageClass): Integer;
begin
  result := IndexOfElement(anObject);
end;

function TImageClassList.Includes(anObject: TImageClass) : Boolean;
begin
  result := IncludesElement(anObject);
end;

function TImageClassList.AddNew: TImageClass;
begin
  result := TImageClass(InternalAddNew);
end;

procedure TImageClassList.Insert(index: Integer; NewObject: TImageClass);
begin
  if assigned(NewObject) then
    InsertElement(index, NewObject);
end;

function TImageClassList.GetBoldObject(index: Integer): TImageClass;
begin
  result := TImageClass(GetElement(index));
end;

procedure TImageClassList.SetBoldObject(index: Integer; NewObject: TImageClass);
begin;
  SetElement(index, NewObject);
end;

function GeneratedCodeCRC: String;
begin
  result := '1866119815';
end;

procedure InstallObjectListClasses(BoldObjectListClasses: TBoldGeneratedClassList);
begin
  BoldObjectListClasses.AddObjectEntry('BusinessClassesRoot', TBusinessClassesRootList);
  BoldObjectListClasses.AddObjectEntry('ImageClass', TImageClassList);
end;

procedure InstallBusinessClasses(BoldObjectClasses: TBoldGeneratedClassList);
begin
  BoldObjectClasses.AddObjectEntry('BusinessClassesRoot', TBusinessClassesRoot);
  BoldObjectClasses.AddObjectEntry('ImageClass', TImageClass);
end;

var
  CodeDescriptor: TBoldGeneratedCodeDescriptor;

initialization
  CodeDescriptor := GeneratedCodes.AddGeneratedCodeDescriptorWithFunc('ImageDemoClasses', InstallBusinessClasses, InstallObjectListClasses, GeneratedCodeCRC);
finalization
  GeneratedCodes.Remove(CodeDescriptor);
end.

 